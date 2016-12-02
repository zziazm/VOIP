//
//  AVCallViewController.m
//
//  Created on 12/1/11.
//  Copyright (c) 2011 Abto Software. All rights reserved.
//

#import <AbtoSipClientWrapper/AbtoSipPhoneObserver.h>

#import "DialerViewController.h"
#import "AudioCallViewController.h"
#import "VideoCallViewController.h"
#import "ImMessageViewController.h"

#define TAB_BAR_ITEM_IM_TAG 500
#define TAB_BAR_ITEM_PHONE_TAG 501

@implementation DialerViewController

@synthesize callAVView;
@synthesize buttonMakeAudioCall;
@synthesize buttonMakeVideoCall;
@synthesize buttonLogout;
@synthesize phoneNumber;  

@synthesize sipField;
@synthesize AVView;

- (IBAction)changeLine:(id)sender {
}

- (IBAction)startSipNumber:(id)sender {
    UIInterfaceOrientation toOrientation = self.interfaceOrientation;
    [UIView beginAnimations:@"rotation" context:nil];
    
    if (toOrientation == UIInterfaceOrientationPortrait || toOrientation == UIInterfaceOrientationPortraitUpsideDown) {
        
        
        int pixUp = 84;
        
        self.phoneNumber.frame = CGRectMake(self.phoneNumber.frame.origin.x, 
                                            self.phoneNumber.frame.origin.y - pixUp,
                                            self.phoneNumber.frame.size.width,
                                            self.phoneNumber.frame.size.height);
        
        self.sipField.frame = CGRectMake(self.sipField.frame.origin.x, 
                                         self.sipField.frame.origin.y - pixUp, 
                                         self.sipField.frame.size.width,
                                         self.sipField.frame.size.height);
        
        self.buttonMakeAudioCall.frame = CGRectMake(self.buttonMakeAudioCall.frame.origin.x, 
                                                    self.buttonMakeAudioCall.frame.origin.y - pixUp,
                                                    self.buttonMakeAudioCall.frame.size.width,
                                                    self.buttonMakeAudioCall.frame.size.height);
        
        self.buttonMakeVideoCall.frame = CGRectMake(self.buttonMakeVideoCall.frame.origin.x, 
                                                    self.buttonMakeVideoCall.frame.origin.y - pixUp,
                                                    self.buttonMakeVideoCall.frame.size.width,
                                                    self.buttonMakeVideoCall.frame.size.height);
    }
}

- (IBAction)endSipNumber:(id)sender {
    UIInterfaceOrientation toOrientation = self.interfaceOrientation;
    [UIView beginAnimations:@"rotation" context:nil];
    
    if (toOrientation == UIInterfaceOrientationPortrait || toOrientation == UIInterfaceOrientationPortraitUpsideDown) {
        
        int pixUp = 84;
        
        self.phoneNumber.frame = CGRectMake(self.phoneNumber.frame.origin.x, 
                                            self.phoneNumber.frame.origin.y + pixUp,
                                            self.phoneNumber.frame.size.width,
                                            self.phoneNumber.frame.size.height);
        
        self.sipField.frame = CGRectMake(self.sipField.frame.origin.x, 
                                         self.sipField.frame.origin.y + pixUp,
                                         self.sipField.frame.size.width,
                                         self.sipField.frame.size.height);
        
        self.buttonMakeAudioCall.frame = CGRectMake(self.buttonMakeAudioCall.frame.origin.x, 
                                                    self.buttonMakeAudioCall.frame.origin.y + pixUp,
                                                    self.buttonMakeAudioCall.frame.size.width,
                                                    self.buttonMakeAudioCall.frame.size.height);
        
        self.buttonMakeVideoCall.frame = CGRectMake(self.buttonMakeVideoCall.frame.origin.x, 
                                                    self.buttonMakeVideoCall.frame.origin.y + pixUp,
                                                    self.buttonMakeVideoCall.frame.size.width,
                                                    self.buttonMakeVideoCall.frame.size.height);
    }
    
}

- (IBAction)loggingOff {
    abtoAppDelegate *app = abtoAppDelegate.sharedInstance;
    buttonLogout.enabled = NO;
    app.connected = NO;
    [app.phone unregister];
}

- (IBAction)textFieldDoneEditing:(id)sender {
    [phoneNumber resignFirstResponder];
}

- (void)viewDidLoad {
    [super viewDidLoad];
    
    [[NSNotificationCenter defaultCenter] addObserver:self selector:@selector(onPhoneNotification:) name:NOTIFICATION_PHONE_EVENT object:nil];
}

- (BOOL)shouldAutorotateToInterfaceOrientation:(UIInterfaceOrientation)interfaceOrientation {
    return (interfaceOrientation == UIInterfaceOrientationPortrait);
}

- (IBAction)onButtonNumpadDown:(id)sender event:(UIEvent *)event {
}

- (IBAction)onButtonClick:(id)sender event:(UIEvent *)event {
    NSString *ownNumber = [abtoAppDelegate sharedInstance].phone.config.regUser;

    [phoneNumber resignFirstResponder];

    if([phoneNumber.text isEqualToString:@""] || // prohibit calling to empty extention
       // prohibit calling to own number
       [phoneNumber.text isEqualToString:ownNumber] ||
       [phoneNumber.text rangeOfString:[ownNumber stringByAppendingString:@"@"]].location != NSNotFound) {
        return;
    }
    
    CallViewController *nextController;
    if (sender == buttonMakeVideoCall) {
        nextController = [VideoCallViewController new];
    } else if (sender == buttonMakeAudioCall) {
        nextController = [AudioCallViewController new];
    } else {
        nextController = nil;
    }

    if (nextController) {
        nextController.number = phoneNumber.text;
        [ApplicationDelegate.navController pushViewController:nextController animated:YES];
    }
}

- (IBAction)onButtonNumpadUp:(id)sender event:(UIEvent *)event {
}

- (void)onPhoneNotification:(NSNotification *)notification {
    PhoneEvents status = [[notification object] integerValue];
    BOOL enabled = (status == PhoneEventsRegSuccess);
    
    buttonMakeAudioCall.enabled = enabled;
    buttonMakeVideoCall.enabled = enabled;
    phoneNumber.enabled = enabled;
}

- (void)viewWillAppear:(BOOL)animated {
    [super viewWillAppear:animated];
    
    UIDevice.currentDevice.proximityMonitoringEnabled = NO;
    
    if (SYSTEM_VERSION_LOWER_THAN(@"7.0")) {
        CGRect screen = UIScreen.mainScreen.bounds;
        buttonLogout.frame = RectSetY(buttonLogout.frame, screen.size.height * 0.7);
    }
}

- (void)dealloc {
    [[NSNotificationCenter defaultCenter] removeObserver:self];
}

@end
