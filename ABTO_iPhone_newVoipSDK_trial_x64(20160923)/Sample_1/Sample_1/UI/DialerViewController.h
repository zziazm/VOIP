//
//  AVCallViewController.h
//
//  Created on 12/1/11.
//  Copyright (c) 2011 Abto Software. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DialerViewController : UIViewController {
    IBOutlet UIView *viewPhone;

    IBOutlet UITextField *phoneNumber;
    IBOutlet UIButton *buttonMakeAudioCall;
    IBOutlet UIButton *buttonMakeVideoCall;
    IBOutlet UIButton *buttonLogout;

    IBOutlet UIImageView *sipField;
}

@property (retain, nonatomic) IBOutlet UIView *callAVView;
@property (retain, nonatomic) IBOutlet UITextField *phoneNumber; 
@property (retain, nonatomic) IBOutlet UIButton *buttonMakeAudioCall;
@property (retain, nonatomic) IBOutlet UIButton *buttonMakeVideoCall;
@property (retain, nonatomic) IBOutlet UIButton *buttonLogout;

@property (retain, nonatomic) IBOutlet UIImageView *sipField;
@property (retain, nonatomic) UIView *AVView;

- (IBAction)onButtonClick:(id)sender event:(UIEvent *)event;
- (IBAction)onButtonNumpadUp:(id)sender event:(UIEvent *)event;
- (IBAction)onButtonNumpadDown:(id)sender event:(UIEvent *)event;
- (IBAction)loggingOff;
- (IBAction)textFieldDoneEditing:(id)sender;

- (IBAction)startSipNumber:(id)sender;
- (IBAction)endSipNumber:(id)sender;

@end
