//
//  abtoAppDelegate.h
//
//  Created on 12/9/11.
//  Copyright (c) 2011 Abto Software. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "AudioCallViewController.h"
#import <AbtoSipClientWrapper/AbtoSipPhoneObserver.h>

//#import "VoipHandler.h"


#define kNotifKey									@"key"
#define kNotifKey_IncomingCall						@"icall"
#define kNotifKey_IncomingMsg						@"imsg"
#define kNotifCall_SessionId                        @"sid"
#define kNotifCall_RemoteInfo                       @"rinfo"
#define kNotifKey_IncomingIm                        @"iim"

@interface ImMessage : NSObject {
@public
    NSString *from;
    NSString *to;
    NSString *text;
    BOOL isRead;
}
@end


@interface abtoAppDelegate : UIResponder <UIApplicationDelegate, AbtoPhoneInterfaceObserver> {
@public
    UINavigationController *navController;
    UILocalNotification *lastCallNotification;
    
    BOOL checkIconLaunch;
    NSMutableArray *imMessages;
}

@property (retain, nonatomic) UIWindow *window;
@property (retain, nonatomic) UINavigationController *navController;
@property (strong, nonatomic) UILocalNotification *lastCallNotification;
@property (nonatomic) BOOL checkIconLaunch;
@property (nonatomic) BOOL connected;
@property (retain, readonly) AbtoPhoneInterface *phone;

+ (abtoAppDelegate*)sharedInstance;

- (void)addMessage:(ImMessage *)message;
- (NSMutableArray *)getIMs;
- (void)restoreIms;
- (void)storeIms;

//- (NSString *)getNumberFromUri:(NSString *)uri;

@end
