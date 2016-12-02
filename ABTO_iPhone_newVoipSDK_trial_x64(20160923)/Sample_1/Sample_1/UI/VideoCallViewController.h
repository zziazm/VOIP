//
//  VideoCallViewController.h
//
//  Created on 1/26/12.
//  Copyright (c) 2012 AbtoSoftware. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CallViewController.h"

@interface VideoCallViewController : CallViewController <UIActionSheetDelegate> {
	IBOutlet UIImageView *imageViewRemoteVideo;
	IBOutlet UIImageView *viewLocalVideo;
	
	IBOutlet UILabel *labelRemoteParty;
	IBOutlet UILabel *labelStatus;
    IBOutlet UIButton *buttonActions;
	
	IBOutlet UIButton *buttonPick;
	IBOutlet UIButton *buttonHangUp;
	IBOutlet UIButton *buttonHangUpLadge;

    IBOutlet UIButton *switchCameraButton;
    IBOutlet UIButton *stopVideoButton;
    
    IBOutlet UIView *backGround;
    IBOutlet UITextField *dtmfInput;
	BOOL sendingVideo;
    
    BOOL isRecording;
    BOOL enableSpeaker;
    BOOL isFrontCamera;
    BOOL isVideoMute;
    
    UIActionSheet *actionMenu;
    
    __weak IBOutlet UILabel *mRecordingLabel;
}

@property (retain, nonatomic) IBOutlet UIImageView *imageViewRemoteVideo;
@property (retain, nonatomic) IBOutlet UIView *viewLocalVideo;
@property (retain, nonatomic) IBOutlet UILabel *labelRemoteParty;
@property (retain, nonatomic) IBOutlet UILabel *labelStatus;

@property (retain, nonatomic) IBOutlet UIButton *buttonPick;
@property (retain, nonatomic) IBOutlet UIButton *buttonHangUp;
@property (retain, nonatomic) IBOutlet UIButton *buttonHangUpLadge;

@property (retain, nonatomic) IBOutlet UIButton *switchCameraButton;
@property (retain, nonatomic) IBOutlet UIButton *stopVideoButton;

- (IBAction)onButtonClick:(UIButton *)sender;
- (IBAction)switchCamera:(UIButton *)sender;
- (IBAction)onNumericKeyPressed:(id)sender;
- (IBAction)stopResumeVideoButtonPressed:(UIButton *)sender;

@end
