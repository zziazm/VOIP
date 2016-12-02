//
//  ImViewController.h
//  Sample_1
//
//  Created on 8/13/12.
//  Copyright (c) 2012 Abto Software. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ImMessageViewController : UIViewController <UITextViewDelegate, UITextFieldDelegate> {
    IBOutlet UITextView *textView;
    IBOutlet UITextField *contactAddressBar;
    
    IBOutlet UIBarButtonItem *buttonDone;
    IBOutlet UIBarButtonItem *buttonBack;
    
    BOOL isReadyToSend;
    
    NSString *imContact;
    NSString *imText;
    
    BOOL isNew;
    //BOOL isEditing;
}

- (id)initWithContact:(NSString *)contact andText:(NSString *)text;

- (IBAction)onButtonBack:(id)sender;
- (IBAction)onButtonSend:(id)sender;

@end
