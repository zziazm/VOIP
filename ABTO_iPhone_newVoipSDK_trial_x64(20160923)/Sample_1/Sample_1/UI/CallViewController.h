//
//  CallViewController.h
//
//  Created on 1/26/12.
//  Copyright (c) 2012 AbtoSoftware. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CallViewController : UIViewController

@property(nonatomic, retain) NSString *number;
@property(nonatomic, assign) NSInteger callId;
@property(nonatomic, assign) BOOL incoming;

- (void)closeView;

@end
