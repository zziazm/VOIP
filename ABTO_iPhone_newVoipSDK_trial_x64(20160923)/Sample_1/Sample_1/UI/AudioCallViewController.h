//
//  AudioCallViewController.h
//
//  Created on 1/26/12.
//  Copyright (c) 2012 AbtoSoftware. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "CallViewController.h"

#define UI_BACKGROUND_TAG 254
#define REMOTE_PARTY_TAG 255

@interface AudioCallViewController : CallViewController <UIActionSheetDelegate> {
	IBOutlet UILabel *labelStatus;
	IBOutlet UILabel *labelRemoteParty;
	IBOutlet UIButton *buttonHangup;
    IBOutlet UIButton *buttonHangupMid;
	IBOutlet UIButton *buttonHangUpLadge;
    IBOutlet UIButton *buttonAccept;
    IBOutlet UIButton *buttonActions;
    IBOutlet UIView *volumeContainer;
    IBOutlet UILabel *volumeText;
    IBOutlet UISlider *volumeHandler;
    
    IBOutlet UITextField *dtmfInput;
    
    BOOL holdCall;
    BOOL isRecording;
    BOOL enableSpeaker;
    BOOL enableBluetooth;
    BOOL muteMicrophone;
    BOOL showVolumeLevel;

    IBOutlet UIView *audioIcon;
    
    __weak IBOutlet UILabel *mRecordingLabel;
}

@property (retain, nonatomic) UIView *audioView;

- (IBAction)onButtonClick:(UIButton *)sender;
- (IBAction)onNumericKeyPressed:(id)sender;
- (IBAction)volumeChanged:(id)sender;

@end
