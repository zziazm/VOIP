//
//  VideoCallViewController.mm
//
//  Created on 1/26/12.
//  Copyright (c) 2012 AbtoSoftware. All rights reserved.
//

#import <AVFoundation/AVCaptureOutput.h>
#import <AVFoundation/AVCaptureDevice.h>
#import <AVFoundation/AVCaptureInput.h>
#import <AVFoundation/AVMediaFormat.h>

#import "VideoCallViewController.h"

#import <QuartzCore/QuartzCore.h> /* cornerRadius... */


#define ACTION_SPEAKER_ON           @"Turn Speaker On"
#define ACTION_SPEAKER_OFF          @"Turn Speaker Off"
#define ACTION_OPEN_DTMF            @"Send DTMF"
#define ACTION_START_RECORDING      @"Start Recording"
#define ACTION_STOP_RECORDING       @"Stop Recording"

#define kColorsDarkBlack [NSArray arrayWithObjects: \
(id)[[UIColor colorWithRed:.1f green:.1f blue:.1f alpha:0.7] CGColor], \
(id)[[UIColor colorWithRed:0.f green:0.f blue:0.f alpha:0.7] CGColor], \
nil]
#define kColorsBlue [NSArray arrayWithObjects: \
(id)[[UIColor colorWithRed:.0f green:.0f blue:.5f alpha:0.7] CGColor], \
(id)[[UIColor colorWithRed:0.f green:0.f blue:1.f alpha:0.7] CGColor], \
nil]
#define kColorsLightBlack [NSArray arrayWithObjects: \
(id)[[UIColor colorWithRed:.2f green:.2f blue:.2f alpha:0.7] CGColor], \
(id)[[UIColor colorWithRed:.1f green:.1f blue:.1f alpha:0.7] CGColor], \
(id)[[UIColor colorWithRed:0.f green:0.f blue:0.f alpha:0.7] CGColor], \
nil]

@implementation VideoCallViewController {
    NSInteger dtmfLen;
}

@synthesize imageViewRemoteVideo;
@synthesize viewLocalVideo;

@synthesize labelRemoteParty;
@synthesize labelStatus;

@synthesize buttonPick;
@synthesize buttonHangUp;
@synthesize buttonHangUpLadge;

@synthesize switchCameraButton;
@synthesize stopVideoButton;

- (id)init {
    self = [super init];
    if (self) {
        isRecording = NO;
        enableSpeaker = YES;
        dtmfLen = 0;
    }
    
    return self;
}


- (void)touchesEnded:(NSSet *)touches withEvent:(UIEvent *)event {
    UITouch *touch = [touches anyObject];
    
    switch (touch.view.tag) {
        case UI_BACKGROUND_TAG:
            [dtmfInput setHidden:YES];
            [dtmfInput resignFirstResponder];
            break;
            
        case REMOTE_PARTY_TAG:
            [dtmfInput setHidden:NO];
            [dtmfInput becomeFirstResponder];
            break;
            
        default:
            break;
    }
}

- (IBAction)onNumericKeyPressed:(id)sender {
    NSString *currentDtmfText = dtmfInput.text;
    NSInteger len = currentDtmfText.length;
    if (len > dtmfLen) {
        [abtoAppDelegate.sharedInstance.phone sendTone:self.callId tone:[currentDtmfText characterAtIndex:(len - 1)]];
    }
    dtmfLen = len;
}

- (IBAction)stopResumeVideoButtonPressed:(UIButton *)sender {
    [sender setTitle:(sender.tag ? @"Stop video" : @"Start video") forState:UIControlStateNormal];
    [[abtoAppDelegate sharedInstance].phone muteVideo:self.callId on:sender.tag];
    sender.tag = !(BOOL)sender.tag;
}

- (void)viewWillAppear:(BOOL)animated {
    [super viewWillAppear:animated];
    
    [UIDevice currentDevice].proximityMonitoringEnabled = YES;
    
    AbtoPhoneInterface* phone = [abtoAppDelegate sharedInstance].phone;
    
    [phone setRemoteView:imageViewRemoteVideo];
    [phone setLocalView:viewLocalVideo];
    
    if (self.incoming) {
        labelStatus.text = @"Incoming video call from";//NSLocalizedString(@"INVIDEOCALL_KEY", @"");
        
        buttonHangUp.hidden = NO;
        buttonPick.hidden = NO;
        buttonHangUpLadge.hidden = YES;
        
    } else {
        self.callId = [phone startCall:self.number withVideo:YES];
        labelStatus.text = @"Dialing";//NSLocalizedString(@"VIDEOCALL_KEY", @"");

        buttonPick.hidden = YES;
        buttonHangUp.hidden = YES;
        buttonHangUpLadge.hidden = NO;
    }

    labelRemoteParty.text = self.number;
    labelRemoteParty.hidden = NO;
    buttonActions.hidden = YES;
    stopVideoButton.hidden = YES;
    switchCameraButton.hidden = YES;
    imageViewRemoteVideo.hidden = YES;
    viewLocalVideo.hidden = YES;
}

- (void)viewDidAppear:(BOOL)animated {
    [super viewDidAppear:animated];
    if (self.callId == kInvalidCallId) {
        [self closeView];
    }
}

- (IBAction)onButtonClick:(id)sender {
    AbtoPhoneInterface* phone = [abtoAppDelegate sharedInstance].phone;

    if(sender == buttonHangUp || sender== buttonHangUpLadge) {
        [phone hangUpCall:self.callId status:486]; /* TODO: 0 - use defalt status */
    } else if(sender == buttonPick) {
        [phone answerCall:self.callId status:200 withVideo:YES];
	} else if(sender == buttonActions) {
        actionMenu = [[UIActionSheet alloc] initWithTitle:nil
                                                 delegate:self
                                        cancelButtonTitle:@"Cancel"
                                   destructiveButtonTitle:nil
                                        otherButtonTitles: enableSpeaker ? ACTION_SPEAKER_OFF : ACTION_SPEAKER_ON,
                      ACTION_OPEN_DTMF, isRecording ? ACTION_STOP_RECORDING : ACTION_START_RECORDING, nil];
        
        [actionMenu showInView:self.view];
    }
}

- (IBAction)switchCamera:(UIButton *)sender {
    [[abtoAppDelegate sharedInstance].phone switchCameraToFront:self.callId on:sender.tag];
    sender.tag = !(BOOL)sender.tag;
}

- (void)actionSheet:(UIActionSheet *)actionSheet clickedButtonAtIndex:(NSInteger)buttonIndex {
    NSString *buttonTitle = [actionSheet buttonTitleAtIndex:buttonIndex];
    AbtoPhoneInterface *phone = [abtoAppDelegate sharedInstance].phone;
    
    if ([buttonTitle isEqualToString:ACTION_OPEN_DTMF]) {
        [dtmfInput setHidden:NO];
        [dtmfInput becomeFirstResponder];
    } else if ([buttonTitle isEqualToString:ACTION_SPEAKER_ON]) {
        [phone setSpeakerphoneOn:YES];
        enableSpeaker = YES;
    } else if ([buttonTitle isEqualToString:ACTION_SPEAKER_OFF]) {
        [phone setSpeakerphoneOn:NO];
        enableSpeaker = NO;
    }
}

- (void)onCallNotification:(NSNotification *)notification {
    NSInteger status = [[notification object] integerValue];
    AbtoPhoneInterface *phone = [abtoAppDelegate sharedInstance].phone;
    
    switch (status) {
        case CallEventsConnected:
            labelStatus.text = @"Video call";//NSLocalizedString(@"VIDEOCALL_KEY", @"");
            
            buttonPick.hidden = YES;
            buttonHangUp.hidden = YES;
            buttonHangUpLadge.hidden = NO;
            buttonActions.hidden = NO;
            stopVideoButton.hidden = NO;
            switchCameraButton.hidden = NO;
            
            [UIApplication sharedApplication].idleTimerDisabled = YES;
            
            viewLocalVideo.layer.borderWidth = 2.f;
            viewLocalVideo.layer.borderColor = [[UIColor whiteColor] CGColor];
            viewLocalVideo.hidden = NO;
            
            imageViewRemoteVideo.layer.borderWidth = 2.f;
            imageViewRemoteVideo.layer.borderColor = [[UIColor whiteColor] CGColor];
            imageViewRemoteVideo.hidden = NO;
            break;
            
        case CallEventsDisconnected:
            labelStatus.text = @"Hanging";//NSLocalizedString(@"TERMINATING_KEY", @"");
            
            stopVideoButton.hidden = YES;
            switchCameraButton.hidden = YES;
            buttonActions.hidden = YES;
            labelRemoteParty.hidden = YES;
            [UIApplication sharedApplication].idleTimerDisabled = NO;
            
            [phone setRemoteView:nil];
            [phone setLocalView:nil];
            
            [self closeView];
            break;
            
        case CallEventsAlerting:
            [phone setSpeakerphoneOn:YES];
            break;
            
        default:
            break;
    }
}

@end
