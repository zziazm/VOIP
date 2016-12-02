//
//  ImViewController.m
//  Sample_1
//
//  Created user on 8/13/12.
//  Copyright (c) 2012 Abto Software. All rights reserved.
//

#import "ImMessageViewController.h"

@implementation ImMessageViewController

- (id)initWithContact:(NSString *)contact andText:(NSString *)text {
    self = [super init];
    if (self) {
        imContact = contact;
        imText = text;
        isNew = NO;
    }
    
    return self;
}

- (id)init {
    self = [super init];
    if (self) {
        imContact = nil;
        imText = nil;
        isNew = YES;
    }
    
    return self;
}

- (void)didReceiveMemoryWarning {
    // Releases the view if it doesn't have a superview.
    [super didReceiveMemoryWarning];
    
    // Release any cached data, images, etc that aren't in use.
}

#pragma mark - View lifecycle

- (void)viewDidLoad {
    [super viewDidLoad];
    
    UIBarButtonItem *barRightNavigationItem = [[UIBarButtonItem alloc] initWithTitle:@"Send" style:UIBarButtonItemStyleBordered target:self action:@selector(onButtonSend:)];
    
    [self.navigationController.navigationBar setTranslucent:YES];
    self.navigationItem.rightBarButtonItem = barRightNavigationItem;
    self.navigationItem.leftBarButtonItem.action = @selector(onButtonBack:);
    
    buttonDone = self.navigationItem.rightBarButtonItem;
    // Do any additional setup after loading the view from its nib.
}

- (BOOL)shouldAutorotateToInterfaceOrientation:(UIInterfaceOrientation)interfaceOrientation {
    // Return YES for supported orientations
    return (interfaceOrientation == UIInterfaceOrientationPortrait);
}

- (BOOL)textViewShouldEndEditing:(UITextView *)textView {
    [self->textView resignFirstResponder];
    return YES;
}

-(void)textViewDidBeginEditing:(UITextView *)textView {
    buttonDone.enabled = YES;
    buttonDone.title = @"Send";
    if (!isNew) {
        self->textView.text = @"";
    }
    isNew = YES;
    [self->textView setFrame:CGRectMake(20, 102, 280, 130)];
}

- (void)textViewDidEndEditing:(UITextView *)textView {
    [self->textView setFrame:CGRectMake(20, 102, 280, 338)];
}

- (void)textFieldDidBeginEditing:(UITextField *)textField {
    buttonDone.enabled = YES;
    buttonDone.title = @"Send";
    if (!isNew) {
        self->textView.text = @"";
    }
    isNew = YES;
}

- (void)textFieldDidEndEditing:(UITextField *)textField {
}

- (BOOL)textFieldShouldReturn:(UITextField *)textField {
    [textField resignFirstResponder];
    return YES;
}

- (void)viewWillAppear:(BOOL)animated {
    [super viewWillAppear:animated];
    
    if (imContact && imText) {
        [textView setText:imText];
        [contactAddressBar setText:imContact];
        buttonDone.title = @"Reply";
    } else {
        buttonDone.enabled = NO;
    }
}

- (IBAction)onButtonBack:(id)sender {
    if ([contactAddressBar isFirstResponder]) {
        [contactAddressBar resignFirstResponder];
    }
    if ([textView isFirstResponder]) {
        [textView resignFirstResponder];
    }

    [self.navigationController popViewControllerAnimated:YES];
}

- (IBAction)onButtonSend:(id)sender {
    if (isNew) {
        if ([contactAddressBar.text isEqualToString:@""]) {
            [contactAddressBar becomeFirstResponder];
            return;
        }
        
        if ([textView.text isEqualToString:@""]) {
            [textView becomeFirstResponder];
            return;
        }

        NSString *to = contactAddressBar.text;
        NSString *text = textView.text;
        
        abtoAppDelegate* appDelegate = [abtoAppDelegate sharedInstance];
        AbtoPhoneInterface* phone = appDelegate.phone;
        
        if ([phone sendTextMessage:to withBody:text]) {
            ImMessage *message = [ImMessage new];
            
            message->text = text;
            message->from = phone.config.regUser;
            message->to = to;
            message->isRead = YES;
            
            [appDelegate addMessage:message];
            [appDelegate storeIms];
        }

        [self.navigationController popViewControllerAnimated:YES];
    } else {
        isNew = YES;
        buttonDone.title = @"Send";
        textView.text = @"";
    }
}

- (void)dealloc {
    imContact = nil;
    imText = nil;
}


@end
