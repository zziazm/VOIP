//
//  abtoAppDelegate.m
//
//  Created on 12/9/11.
//  Copyright (c) 2011 Abto Software. All rights reserved.
//

#import "abtoAppDelegate.h"
#import "MainPageViewController.h"
#import "AudioCallViewController.h"
#import "VideoCallViewController.h"

@implementation ImMessage
@end

@implementation abtoAppDelegate

@synthesize window = _window;
@synthesize navController;

@synthesize lastCallNotification = lastCallNotification;

@synthesize checkIconLaunch = mCheckIconLaunch;

- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {
    if ([UIApplication instancesRespondToSelector:@selector(registerUserNotificationSettings:)]){
        [application registerUserNotificationSettings:[UIUserNotificationSettings settingsForTypes:UIUserNotificationTypeAlert|UIUserNotificationTypeBadge|UIUserNotificationTypeSound categories:nil]];
    }

    [application isIdleTimerDisabled];
    
    MainPageViewController *mainPageViewController = [MainPageViewController new];
    mainPageViewController.title = @"ABTO Softphone";
    navController = [[UINavigationController alloc] initWithRootViewController:mainPageViewController];
    [self.window addSubview:navController.view];
    [self.navController setNavigationBarHidden:YES animated:NO];
    
    self.window = [[UIWindow alloc] initWithFrame:[[UIScreen mainScreen] bounds]];
    // Override point for customization after application launch.
    self.window.backgroundColor = [UIColor whiteColor];
    
    [self.window setRootViewController:navController];
    [self.window makeKeyAndVisible];
    
    [self initAppearance];
    
    [self restoreIms];
    
    _phone = [AbtoPhoneInterface new];
    [_phone initialize:self];
    [_phone.config loadFromUserDefaults:SETTINGS_KEY];
    
    NSNotificationCenter *center = [NSNotificationCenter defaultCenter];
    [center addObserver:self selector:@selector(createNotificationChecker:)
                                                 name:UIApplicationDidFinishLaunchingNotification object:nil];
    [center addObserver:self selector:@selector(createNotificationChecker:)
                                                 name:UIApplicationWillEnterForegroundNotification object:nil];
    
    return YES;
}

- (void)createNotificationChecker:(NSNotification *)notification {
    NSDictionary *launchOptions = [notification userInfo];
    
    // This code will be called immediately after application:didFinishLaunchingWithOptions:.
    UILocalNotification *localNotification = [launchOptions objectForKey:UIApplicationLaunchOptionsLocalNotificationKey];
    
    self.checkIconLaunch = !localNotification;
}

- (void)initAppearance {
    if (SYSTEM_VERSION_LOWER_THAN(@"7.0")) {
        [[UIBarButtonItem appearance] setTintColor:RGB(45, 125, 0)];
        [[UINavigationBar appearance] setTintColor:RGB(45, 125, 0)];
        [[UITabBar appearance] setTintColor:RGB(45, 80, 0)];
    } else {
        [[UINavigationBar appearance] setBarTintColor:RGBA(45, 125, 0, 0.7)];
        [[UINavigationBar appearance] setTintColor:RGBA(0, 50, 115, 0.8)];
        
        [[UITabBar appearance] setBarTintColor:RGBA(45, 80, 0, 0.7)];
        [[UITabBar appearance] setTintColor:RGBA(0, 50, 115, 0.8)];
    }
}


- (void)applicationWillResignActive:(UIApplication *)application {
    [application scheduledLocalNotifications];
}

-(void)applicationDidEnterBackground:(UIApplication *)application {
    [_phone keepAwake:YES];
}

- (void)applicationWillEnterForeground:(UIApplication *)application {
    [_phone keepAwake:NO];
    
    [UIApplication sharedApplication].applicationIconBadgeNumber = 0;
}

- (void)applicationDidBecomeActive:(UIApplication *)application {
    if (self.checkIconLaunch) {
        self.checkIconLaunch = NO;
        if (lastCallNotification) {
            NSDictionary *data = lastCallNotification.userInfo;
            [[NSNotificationCenter defaultCenter] postNotificationName:NOTIFICATION_CALL_EVENT object:@(CallEventsIncoming) userInfo:@{CALL_ID_ARGUMENT:data[kNotifCall_SessionId], CONTACT_ARGUMENT:data[kNotifCall_RemoteInfo]}];
            lastCallNotification = nil;
        }
    }
}

- (void)applicationWillTerminate:(UIApplication *)application {
    [_phone deinitialize];
}

- (void)application:(UIApplication *)application didReceiveLocalNotification:(UILocalNotification *)notification {
	NSString *notifKey = [notification.userInfo objectForKey:kNotifKey];
	if([notifKey isEqualToString:kNotifKey_IncomingCall]) {
        application.applicationIconBadgeNumber -= notification.applicationIconBadgeNumber;
	} else if ([notifKey isEqualToString:kNotifKey_IncomingIm]) {
        application.applicationIconBadgeNumber -= notification.applicationIconBadgeNumber;
        [[NSNotificationCenter defaultCenter] postNotificationName:NOTIFICATION_NEW_IM object:nil];
    }
}

+ (abtoAppDelegate *)sharedInstance {
	return ((abtoAppDelegate *) [[UIApplication sharedApplication] delegate]);
}

- (void)addMessage:(ImMessage *)message {
    [imMessages addObject:message];
}

- (NSMutableArray *)getIMs {
    return imMessages;
}

- (void)storeIms {
    NSMutableArray *history = [[NSMutableArray alloc] init];
    
    for (NSInteger i = 0; i < [imMessages count]; i++) {
        ImMessage *message = [imMessages objectAtIndex:i];
        
        NSDictionary *entry = [[NSDictionary alloc] initWithObjectsAndKeys:
                               message->to, IM_TO_KEY,
                               message->from, IM_FROM_KEY,
                               message->text, IM_BODY_KEY,
                               (message->isRead ? @"YES" : @"NO"), IM_IS_READ_KEY,
                               nil];
        [history addObject:entry];
        entry = nil;
        message = nil;
    }
    
    NSUserDefaults *defaults = [NSUserDefaults standardUserDefaults];
    [defaults removeObjectForKey:IM_HISTORY_KEY];
    [defaults setObject:history forKey:IM_HISTORY_KEY];
    
    [defaults synchronize];
    
    [history removeAllObjects];
    history = nil;
    defaults = nil;
}

- (void)restoreIms {
    if (imMessages)
        [imMessages removeAllObjects];
    else
        imMessages = [[NSMutableArray alloc] init];
    
    NSUserDefaults *defaults = [NSUserDefaults standardUserDefaults];
    
    NSArray *history = [defaults objectForKey:IM_HISTORY_KEY];
    if (history == nil)
        return;
    
    for (NSInteger i = 0; i < [history count]; i++) {
        NSDictionary *entry = [history objectAtIndex:i];
        ImMessage *message = [[ImMessage alloc] init];
        
        message->to = [entry objectForKey:IM_TO_KEY];
        message->from = [entry objectForKey:IM_FROM_KEY];
        message->text = [entry objectForKey:IM_BODY_KEY];
        NSString *isRead = [entry objectForKey:IM_IS_READ_KEY];
        message->isRead = [isRead isEqualToString:@"YES"];
        
        [imMessages addObject:message];
        entry = nil;
        message = nil;
        isRead = nil;
    }
    
    history = nil;
}

#pragma mark -
#pragma mark Abto SIP SDK delegate

- (void)onRegistered:(NSInteger)accId {
    [[NSNotificationCenter defaultCenter] postNotificationName:NOTIFICATION_PHONE_EVENT object:@(PhoneEventsRegSuccess)];
}

- (void)onRegistrationFailed:(NSInteger)accId statusCode:(int)statusCode statusText:(NSString*)statusText {
    [[NSNotificationCenter defaultCenter] postNotificationName:NOTIFICATION_PHONE_EVENT object:@(PhoneEventsRegFailed)];
}

- (void)onUnRegistered:(NSInteger)accId {
    [[NSNotificationCenter defaultCenter] postNotificationName:NOTIFICATION_PHONE_EVENT object:@(PhoneEventsUnregSuccess)];
}

- (void)onRemoteAlerting:(NSInteger)accId statusCode:(int)statusCode {
    [[NSNotificationCenter defaultCenter] postNotificationName:NOTIFICATION_PHONE_EVENT object:@(PhoneEventsRemoteAlerting)];
}

- (void)onIncomingCall:(NSInteger)callId remoteContact:(NSString *)remoteContact {
    [[NSNotificationCenter defaultCenter] postNotificationName:NOTIFICATION_CALL_EVENT object:@(CallEventsIncoming) userInfo:@{CALL_ID_ARGUMENT:@(callId), CONTACT_ARGUMENT:remoteContact}];
}

- (void)onCallConnected:(NSInteger)callId remoteContact:(NSString *)remoteContact {
    [[NSNotificationCenter defaultCenter] postNotificationName:NOTIFICATION_CALL_EVENT object:@(CallEventsConnected) userInfo:@{CALL_ID_ARGUMENT:@(callId)}];
}

- (void)onCallDisconnected:(NSInteger)callId remoteContact:(NSString *)remoteContact statusCode:(NSInteger)statusCode message:(NSString *)message {
    [[NSNotificationCenter defaultCenter] postNotificationName:NOTIFICATION_CALL_EVENT object:@(CallEventsDisconnected) userInfo:@{CALL_ID_ARGUMENT:@(callId), STATUS_ARGUMENT:@(statusCode)}];
}

- (void)onCallAlerting:(NSInteger)callId statusCode:(int)statusCode {
    [[NSNotificationCenter defaultCenter] postNotificationName:NOTIFICATION_CALL_EVENT object:@(CallEventsAlerting) userInfo:@{CALL_ID_ARGUMENT:@(callId), STATUS_ARGUMENT:@(statusCode)}];
}

- (void)onPresenceChanged:(NSString *)uri status:(PhoneBuddyStatus)status note:(NSString *)note {
    
}

- (void)onCallHeld:(NSInteger)callId state:(BOOL)state {
    
}

- (void)onToneReceived:(NSInteger)callId tone:(NSInteger)tone {
    
}

- (void)onTextMessageReceived:(NSString *)from to:(NSString *)to body:(NSString *)body {
    ImMessage *message = [ImMessage new];
    
    message->from = [AbtoPhoneInterface sipUriUsername:from];
    message->to = [AbtoPhoneInterface sipUriUsername:to];
    message->text = body;
    message->isRead = NO;
    
    [self addMessage:message];
    
    UIApplicationState state = [UIApplication sharedApplication].applicationState;
    
    if (state == UIApplicationStateBackground || state == UIApplicationStateInactive) {
        UILocalNotification* localNotif = [UILocalNotification new];
        if (localNotif) {
            localNotif.alertBody = [NSString stringWithFormat:@"IM from %@", from];
            localNotif.soundName = UILocalNotificationDefaultSoundName;
            localNotif.applicationIconBadgeNumber = ++[UIApplication sharedApplication].applicationIconBadgeNumber;
            localNotif.repeatInterval = 0;

            NSDictionary *userInfo = @{ kNotifKey: kNotifKey_IncomingIm };
            localNotif.userInfo = userInfo;
            [[UIApplication sharedApplication] presentLocalNotificationNow:localNotif];
        }
    } else {
        [[NSNotificationCenter defaultCenter] postNotificationName:NOTIFICATION_NEW_IM object:nil];
    }
}

- (void)onTextMessageStatus:(NSString *)address reason:(NSString *)reason status:(BOOL)status {
    
}

- (void)onTransferStatus:(NSInteger)callId statusCode:(int)statusCode message:(NSString *)message {
    [[NSNotificationCenter defaultCenter] postNotificationName:NOTIFICATION_CALL_EVENT object:@(CallEventsTransfering) userInfo:@{CALL_ID_ARGUMENT:@(callId), STATUS_ARGUMENT:@(statusCode), MESSAGE_ARGUMENT:message}];
}

- (void)onZrtpSas:(NSInteger)callId sas:(NSString *)sas {
    [[NSNotificationCenter defaultCenter] postNotificationName:NOTIFICATION_CALL_EVENT object:@(CallEventsZrtpSas) userInfo:@{CALL_ID_ARGUMENT:@(callId), MESSAGE_ARGUMENT:sas}];
}

- (void)onZrtpSecureState:(NSInteger)callId secured:(BOOL)secured {
    NSLog(@"ZRTP secured = %@", secured ? @"YES" : @"NO");
    [[NSNotificationCenter defaultCenter] postNotificationName:NOTIFICATION_CALL_EVENT object:@(CallEventsZrtpSecureState) userInfo:@{CALL_ID_ARGUMENT:@(callId), STATUS_ARGUMENT:@(secured)}];
    
}

- (void)onZrtpError:(NSInteger)callId error:(NSInteger)error subcode:(NSInteger)subcode {
    NSLog(@"ZRTP error = %ld(subcode = %ld)", (long)error, (long)subcode);
    [[NSNotificationCenter defaultCenter] postNotificationName:NOTIFICATION_CALL_EVENT object:@(CallEventsZrtpSecureState) userInfo:@{CALL_ID_ARGUMENT:@(callId), STATUS_ARGUMENT:@(error)}];
}

@end
