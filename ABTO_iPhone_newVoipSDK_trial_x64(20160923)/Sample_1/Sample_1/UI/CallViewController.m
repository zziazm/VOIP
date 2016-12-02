//
//  CallViewController.mm
//
//  Created on 1/26/12.
//  Copyright (c) 2012 AbtoSoftware. All rights reserved.
//

#import "CallViewController.h"

@implementation CallViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    [[NSNotificationCenter defaultCenter] addObserver:self selector:@selector(onPhoneNotification:) name:NOTIFICATION_PHONE_EVENT object:nil];
}

- (void)viewWillAppear:(BOOL)animated {
    [super viewWillAppear:animated];
    
    [[NSNotificationCenter defaultCenter] addObserver:self selector:@selector(onCallNotification:) name:NOTIFICATION_CALL_EVENT object:nil];
}

- (void)closeView {
    if (self == [ApplicationDelegate.navController topViewController])
        [ApplicationDelegate.navController popViewControllerAnimated:YES];
    DLog(@"closeView");
}

- (void)dealloc {
    [[NSNotificationCenter defaultCenter] removeObserver:self];
}

- (void)onCallNotification:(NSNotification *)notification {
}

- (void)onPhoneNotification:(NSNotification *)notification {
}

@end
