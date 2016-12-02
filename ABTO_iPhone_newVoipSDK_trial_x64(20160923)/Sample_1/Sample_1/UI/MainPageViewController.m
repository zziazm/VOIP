//
//  MainPageViewController.m
//
//  Created on 12/8/11.
//  Copyright (c) 2011 ABTO Software. All rights reserved.
//

#import "MainPageViewController.h"
#import "SettingsViewController.h"
#import "DialerViewController.h"
#import "MainTabBarViewController.h"
#import "VideoCallViewController.h"

@implementation MainPageViewController

- (void)saveChanges {
    if (name.text == nil) {
        name.text = @"";
    }
    if (password.text == nil) {
        password.text = @"";
    }
    if (domain.text == nil) {
        domain.text = @"";
    }
    AbtoPhoneConfig* config = abtoAppDelegate.sharedInstance.phone.config;
    config.regUser = name.text;
    config.regPassword = password.text;
    config.regDomain = domain.text;
    // for bundled resources use relative path, for global resources URL
    //config.ringToneUrl = @"abto_ringtone.mp3";
    //config.ringBackToneUrl = @"abto_ringbacktone.wav";
    [config saveToUserDefaults:SETTINGS_KEY];
}

- (IBAction)enterClick:(id)sender {
    if ((domain.text && ![domain.text isEqualToString:@""]) &&
        (name.text && ![name.text isEqualToString:@""]) &&
        (password.text && ![password.text isEqualToString:@""])){

        [self saveChanges];

        if ([[abtoAppDelegate sharedInstance].phone finalizeConfiguration]) {
            [activityIndicator startAnimating];
            buttonEnter.enabled = NO;
        }
    } else {
        UIAlertView *requiredFieldsAreEmpty = [[UIAlertView alloc] initWithTitle:@"Required fields are empty" message:@"Please fill in all the fields" delegate:nil cancelButtonTitle:@"Ok" otherButtonTitles: nil];
        [requiredFieldsAreEmpty show];
    }
}

- (IBAction)settingsClick:(id)sender {
    [self saveChanges];
    SettingsViewController *nextController = [SettingsViewController new];
    [nextController.navigationController setNavigationBarHidden:NO animated:NO];
    UINavigationController *navigationController = [[UINavigationController alloc] initWithRootViewController:nextController];
    
    [ApplicationDelegate.navController presentViewController:navigationController animated:YES completion:nil];
}

- (IBAction)textFieldDoneEditing:(id)sender {
    if ((sender == name) || (sender == password) || (sender == domain)) {
        [sender becomeFirstResponder];
    }
}

- (IBAction)backgroundClick:(id)sender {
    [name resignFirstResponder];
    [password resignFirstResponder];
    [domain resignFirstResponder];
}

-(void)refreshFields {
    AbtoPhoneConfig* config = [abtoAppDelegate sharedInstance].phone.config;
    name.text = config.regUser;
    password.text = config.regPassword;
    domain.text = config.regDomain;
}

#pragma mark - View lifecycle

- (void)viewDidLoad {
    [super viewDidLoad];
    
    CGRect screen = [[UIScreen mainScreen] bounds];
    CGRect rect = [buttonEnter frame];

    rect.origin.y = screen.size.height * 0.8f;
    [buttonEnter setFrame:rect];

    rect = [name frame];
    rect.origin.y = screen.size.height * 0.3f;
    [name setFrame:rect];
    
    rect = [password frame];
    rect.origin.y = [name frame].origin.y + [name frame].size.height + screen.size.height * 0.05f;
    [password setFrame:rect];
    
    rect = [domain frame];
    rect.origin.y = [password frame].origin.y + [password frame].size.height + screen.size.height * 0.05f;
    [domain setFrame:rect];
    
    [self refreshFields];
    
    [[NSNotificationCenter defaultCenter] addObserver:self selector:@selector(onPhoneNotification:) name:NOTIFICATION_PHONE_EVENT object:nil];
    [[NSNotificationCenter defaultCenter] addObserver:self selector:@selector(onCallNotification:) name:NOTIFICATION_CALL_EVENT object:nil];
}

- (BOOL)shouldAutorotateToInterfaceOrientation:(UIInterfaceOrientation)interfaceOrientation {
    // Return YES for supported orientations
    return (interfaceOrientation == UIInterfaceOrientationPortrait);
}

-(void)viewWillAppear:(BOOL)animated {
    [super viewWillAppear:animated];
    buttonEnter.enabled = YES;
    [activityIndicator stopAnimating];
}

-(void)viewDidAppear:(BOOL)animated {
    [self refreshFields];
	[super viewDidAppear:animated];    
}

-(void)viewWillDisappear:(BOOL)animated {
    [self saveChanges];
    [super viewWillDisappear:animated];
}

- (void)dealloc {
    [[NSNotificationCenter defaultCenter] removeObserver:self];
}

- (void)onPhoneNotification:(NSNotification *)notification {
    PhoneEvents status = [[notification object] integerValue];
    BOOL presentInStack = NO;
    switch (status) {
        case PhoneEventsRemoteAlerting:
            [activityIndicator startAnimating];
            DLog(@"onPhoneNotification Remote Alerting");
            break;
        case PhoneEventsRegSuccess:
            [activityIndicator stopAnimating];
            ApplicationDelegate.connected = YES;
            DLog(@"[ApplicationDelegate.navController.topViewController class] = %@", [ApplicationDelegate.navController.topViewController class]);
            for (UIViewController* controller in ApplicationDelegate.navController.viewControllers) {
                if ([controller isKindOfClass:[MainTabBarViewController class]]) {
                    presentInStack = YES;
                    break;
                }
            }
            
            if (!presentInStack){
                [ApplicationDelegate.navController pushViewController:[MainTabBarViewController new] animated:YES];
                DLog(@"View was pushed again");
            }
            DLog(@"onPhoneNotification Registered");
            break;
        case PhoneEventsUnregSuccess:
            [activityIndicator stopAnimating];
            buttonEnter.enabled = YES;
            DLog(@"onPhoneNotification Unregistered");
            break;
        case PhoneEventsUnregFailed:
            // FIX:just to make sure to logout in case we failed prolongating expiration time on SIP server
            //[abtoAppDelegate logout];
            DLog(@"onPhoneNotification Register Failed");
        default:
            [activityIndicator stopAnimating];
            buttonEnter.enabled = YES;
            break;
    }
}

- (void)onCallNotification:(NSNotification *)notification {
    NSInteger status = [[notification object] integerValue];
    
    if (status == CallEventsIncoming) {
        NSInteger callId = [[notification.userInfo valueForKey:CALL_ID_ARGUMENT] integerValue];
        NSString *contact = [notification.userInfo valueForKey:CONTACT_ARGUMENT];
        
        if (callId != kInvalidCallId) {
            UIApplication *app = [UIApplication sharedApplication];
            abtoAppDelegate *appDelegate = [abtoAppDelegate sharedInstance];
            NSString *remotePartyNumber = [AbtoPhoneInterface sipUriUsername:contact];
            UIApplicationState state = app.applicationState;
            
            [appDelegate.phone setSpeakerphoneOn:YES];
            if ((state == UIApplicationStateBackground) || (state == UIApplicationStateInactive)) {
                UILocalNotification *localNotification = [UILocalNotification new];
                if (localNotification) {
                    localNotification.alertBody = [NSString stringWithFormat:@"%@ %@", remotePartyNumber, @"calling"];
                    //            localNotif.soundName = UILocalNotificationDefaultSoundName;
                    localNotification.applicationIconBadgeNumber = ++app.applicationIconBadgeNumber;
                    localNotification.repeatInterval = 0;
                    NSDictionary *userInfo = @{ kNotifKey: kNotifKey_IncomingCall,
                                                kNotifCall_SessionId : @(callId),
                                                kNotifCall_RemoteInfo: contact };

                    localNotification.userInfo = userInfo;
                    [[UIApplication sharedApplication]  presentLocalNotificationNow:localNotification];
                    ApplicationDelegate.lastCallNotification = localNotification;
                }
                
            } else {
                CallViewController *nextController = [appDelegate.phone isVideoCall:callId] ? [VideoCallViewController new] : [AudioCallViewController new];
                nextController.number = remotePartyNumber;
                nextController.callId = callId;
                nextController.incoming = YES;
                [appDelegate.navController pushViewController:nextController animated:YES];
            }
        }
    } else if (status == CallEventsDisconnected) {
        ApplicationDelegate.lastCallNotification = nil;
    }
}

@end
