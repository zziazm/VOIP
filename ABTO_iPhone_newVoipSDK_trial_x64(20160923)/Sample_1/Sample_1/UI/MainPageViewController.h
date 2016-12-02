//
//  MainPageViewController.h
//
//  Created on 12/8/11.
//  Copyright (c) 2011 Abto Software. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MainPageViewController : UIViewController {
    IBOutlet UIActivityIndicatorView *activityIndicator;
    IBOutlet UITextField *name;   
    IBOutlet UITextField *password;   
    IBOutlet UITextField *domain;
    IBOutlet UIButton *buttonEnter;
    IBOutlet UIButton *buttonSettings;
}

- (IBAction)enterClick:(id)sender;
- (IBAction)settingsClick:(id)sender;
- (IBAction)textFieldDoneEditing:(id)sender;
- (IBAction)backgroundClick:(id)sender;

@end
