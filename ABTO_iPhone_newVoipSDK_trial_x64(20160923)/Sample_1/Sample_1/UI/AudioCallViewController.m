//
//  AudioCallViewController.mm
//
//  Created on 1/26/12.
//  Copyright (c) 2012 AbtoSoftware. All rights reserved.
//

#import <uikit/uikit.h>

#import "AudioCallViewController.h"
#import <QuartzCore/QuartzCore.h>
#import "MainPageViewController.h"
#import <AVFoundation/AVFoundation.h>

#define ACTION_SPEAKER_ON           @"Turn Speaker On"
#define ACTION_SPEAKER_OFF          @"Turn Speaker Off"
#define ACTION_OPEN_DTMF            @"Send DTMF"
#define ACTION_TRANSFER_CALL        @"Transfer Call"
#define ACTION_HOLD_CALL            @"Hold Call"
#define ACTION_RESUME_CALL          @"Resume Call"
#define ACTION_BLUETOOTH_ON         @"Turn Bluetooth On"
#define ACTION_BLUETOOTH_OFF        @"Turn Bluetooth Off"
#define ACTION_START_RECORDING      @"Start Recording"
#define ACTION_STOP_RECORDING       @"Stop Recording"
#define ACTION_MUTE_MICROPHONE      @"Mute Microphone"
#define ACTION_UNMUTE_MICROPHONE    @"Unmute Microphone"
#define ACTION_SHOW_VOLUME_LEVEL    @"Show Volume Level"
#define ACTION_HIDE_VOLUME_LEVEL    @"Hide Volume Level"
#define ACTION_SHOW_RTT             @"Show RTT"

#define TRANSFER_CALL_DIALOG_HEADER  @"Transfer call"
#define TRANSFER_CALL_DIALOG_MESSAGE @"Enter number to transfer"

@implementation AudioCallViewController {
    UIActionSheet *actionMenu;
    id transferDialog;
    NSInteger dtmfLen;
    UIAlertView *sasMessage;
}

- (id)init {
    self = [super init];

    if (self) {
        enableSpeaker = NO;
        holdCall = NO;
        enableBluetooth = NO;
        isRecording = NO;
        muteMicrophone = NO;
        dtmfLen = 0;
        transferDialog = nil;
    }
    
    return self;
}

- (void)touchesEnded:(NSSet *)touches withEvent:(UIEvent *)event {
    UITouch *touch = [touches anyObject];
    
    switch (touch.view.tag) {
        case UI_BACKGROUND_TAG:
            [audioIcon setHidden:NO];
            [dtmfInput setHidden:YES];
            [dtmfInput resignFirstResponder];
            break;
            
        case REMOTE_PARTY_TAG:
            [audioIcon setHidden:YES];
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

- (IBAction)volumeChanged:(id)sender {
    float value = volumeHandler.value;
    volumeText.text = [NSString stringWithFormat:@"%.2f", value];
    [[abtoAppDelegate sharedInstance].phone setCall:self.callId speakerLevel:value];
}

- (void)viewWillAppear:(BOOL)animated {
    [super viewWillAppear:animated];

	[UIDevice currentDevice].proximityMonitoringEnabled = YES;
    
    AbtoPhoneInterface* phone = [abtoAppDelegate sharedInstance].phone;
    
    if (self.incoming) {
        labelRemoteParty.text = self.number;
        labelRemoteParty.hidden = NO;
        buttonHangUpLadge.hidden = YES;
        buttonHangupMid.hidden = YES;
        buttonHangup.hidden = NO;
        buttonAccept.hidden = NO;
        buttonActions.hidden = YES;
        labelStatus.text = @"Calling"; //NSLocalizedString(@"CALLING_KEY", @"");
    } else {
        self.callId = [phone startCall:self.number withVideo:NO];
        labelRemoteParty.text = self.number;
        labelRemoteParty.hidden = NO;
        buttonHangUpLadge.hidden = NO;
        buttonHangupMid.hidden = YES;
        buttonHangup.hidden = YES;
        buttonAccept.hidden = YES;
        buttonActions.hidden = YES;
        labelStatus.text = @"Dialing";//NSLocalizedString(@"DIALING_KEY", @"");
    }
    showVolumeLevel = !volumeContainer.hidden;
}

- (void)viewDidDisappear:(BOOL)animated {
    if (SYSTEM_VERSION_GREATER_THAN_OR_EQUAL_TO(@"8.0")) {
        [transferDialog dismissViewControllerAnimated:YES completion:^{}];
    } else {
        [transferDialog dismissWithClickedButtonIndex:0 animated:YES];
    }
    [super viewDidDisappear:animated];
}

- (void)viewDidAppear:(BOOL)animated {
    [super viewDidAppear:animated];
    if (self.callId == kInvalidCallId) {
        [self closeView];
    }
}

- (IBAction)onButtonClick:(UIButton *)sender {
    AbtoPhoneInterface* phone = [abtoAppDelegate sharedInstance].phone;

    if (sender == buttonHangup || sender == buttonHangUpLadge || sender == buttonHangupMid) {
        [phone hangUpCall:self.callId status:486]; /* TODO: 0 - use defalt status */
    } if(sender == buttonAccept) {
        [phone answerCall:self.callId status:200 withVideo:NO];
    } else if(sender == buttonActions) {
        actionMenu = [[UIActionSheet alloc] initWithTitle:nil
                                                 delegate:self
                                        cancelButtonTitle:@"Cancel"
                                   destructiveButtonTitle:nil
                                        otherButtonTitles:enableBluetooth ? ACTION_BLUETOOTH_OFF : ACTION_BLUETOOTH_ON, enableSpeaker ? ACTION_SPEAKER_OFF : ACTION_SPEAKER_ON,                                            holdCall ? ACTION_RESUME_CALL : ACTION_HOLD_CALL, ACTION_OPEN_DTMF, ACTION_TRANSFER_CALL,
                                            isRecording ? ACTION_STOP_RECORDING : ACTION_START_RECORDING,
                                            muteMicrophone ? ACTION_UNMUTE_MICROPHONE : ACTION_MUTE_MICROPHONE,
                                            showVolumeLevel ? ACTION_HIDE_VOLUME_LEVEL :ACTION_SHOW_VOLUME_LEVEL,
                                            ACTION_SHOW_RTT,
                                            nil];
        
        [actionMenu showFromRect:CGRectMake(0, ScreenHeight, ScreenWidth, 0) inView:self.view animated:YES];
    }
}

- (BOOL)shouldAutorotateToInterfaceOrientation:(UIInterfaceOrientation)interfaceOrientation {
    return (interfaceOrientation==UIInterfaceOrientationPortrait);
}

- (void)actionSheet:(UIActionSheet *)actionSheet clickedButtonAtIndex:(NSInteger)buttonIndex {
    NSString *buttonTitle = [actionSheet buttonTitleAtIndex:buttonIndex];
    AbtoPhoneInterface* phone = [abtoAppDelegate sharedInstance].phone;
    
    if ([buttonTitle isEqualToString:ACTION_OPEN_DTMF]) {
        [audioIcon setHidden:YES];
        [dtmfInput setHidden:NO];
        [dtmfInput becomeFirstResponder];
    } else if ([buttonTitle isEqualToString:ACTION_BLUETOOTH_ON]) {
        enableBluetooth = YES;
        [phone setBluetoothOn:YES];
    } else if ([buttonTitle isEqualToString:ACTION_BLUETOOTH_OFF]) {
        [phone setBluetoothOn:NO];
        enableBluetooth = NO;
    } else if ([buttonTitle isEqualToString:ACTION_SPEAKER_ON]) {
        enableSpeaker = YES;
        [phone setSpeakerphoneOn:YES];
    } else if ([buttonTitle isEqualToString:ACTION_SPEAKER_OFF]) {
        [phone setSpeakerphoneOn:NO];
        enableSpeaker = NO;
    } else if ([buttonTitle isEqualToString:ACTION_TRANSFER_CALL]) {
        if (SYSTEM_VERSION_GREATER_THAN_OR_EQUAL_TO(@"8.0")) {
            UIAlertController *alert = [UIAlertController alertControllerWithTitle:TRANSFER_CALL_DIALOG_HEADER message:TRANSFER_CALL_DIALOG_MESSAGE preferredStyle:UIAlertControllerStyleAlert];
            UIAlertAction *ok = [UIAlertAction actionWithTitle:@"OK" style:UIAlertActionStyleDefault handler:^(UIAlertAction *action) {
                [alert dismissViewControllerAnimated:YES completion:nil];
                NSString *number = [alert.textFields[0] text];
                if (number.length > 0) {
                    [phone transferCall:self.callId toContact:number];
                }
            }];
            UIAlertAction *cancel = [UIAlertAction actionWithTitle:@"Cancel" style:UIAlertActionStyleDefault handler:^(UIAlertAction *action) {
                [alert dismissViewControllerAnimated:YES completion:nil];
            }];
            [alert addTextFieldWithConfigurationHandler:^(UITextField *textField) {
                textField.placeholder = @"number";
                textField.secureTextEntry = NO;
            }];
            [alert addAction:ok];
            [alert addAction:cancel];
            [self presentViewController:alert animated:YES completion:nil];
        } else {
            UIAlertView *alert = [[UIAlertView alloc] initWithTitle:TRANSFER_CALL_DIALOG_HEADER message:TRANSFER_CALL_DIALOG_MESSAGE delegate:self cancelButtonTitle:@"Cancel" otherButtonTitles:@"OK", nil];
            alert.alertViewStyle = UIAlertViewStylePlainTextInput;
            [alert show];
        }
    } else if ([buttonTitle isEqualToString:ACTION_START_RECORDING]) {
        NSLocale *locale = [[NSLocale alloc] initWithLocaleIdentifier:@"en_US_POSIX"];
        NSDateFormatter *formatter = [NSDateFormatter new];
        [formatter setDateFormat:@"yyyy_MM_dd_HH_mm_ss"];
        [formatter setLocale:locale];
        NSString *filename = [NSString stringWithFormat:@"%@/rec_%@_%@.wav", [[[[NSFileManager defaultManager] URLsForDirectory:NSDocumentDirectory inDomains:NSUserDomainMask] lastObject] path], self.number, [formatter stringFromDate:[NSDate date]]];
        isRecording = [phone startRecordingFor:self.callId filePath:filename];
    } else if ([buttonTitle isEqualToString:ACTION_STOP_RECORDING]) {
        isRecording = ![phone stopRecording];
    } else if ([buttonTitle isEqualToString:ACTION_HOLD_CALL]) {
        [phone holdRetriveCall:self.callId];
        holdCall = YES;
    } else if ([buttonTitle isEqualToString:ACTION_RESUME_CALL]) {
        [phone holdRetriveCall:self.callId];
        holdCall = NO;
    } else if ([buttonTitle isEqualToString:ACTION_MUTE_MICROPHONE]) {
        [phone muteMicrophone:self.callId on:YES];
        muteMicrophone = YES;
    } else if ([buttonTitle isEqualToString:ACTION_UNMUTE_MICROPHONE]) {
        [phone muteMicrophone:self.callId on:NO];
        muteMicrophone = NO;
    } else if ([buttonTitle isEqualToString:ACTION_SHOW_VOLUME_LEVEL]) {
        volumeContainer.hidden = NO;
        showVolumeLevel = YES;
        volumeText.text = @"1.00";
        [volumeHandler setValue:1.0 animated:YES];
    } else if ([buttonTitle isEqualToString:ACTION_HIDE_VOLUME_LEVEL]) {
        volumeContainer.hidden = YES;
        showVolumeLevel = NO;
    } else if ([buttonTitle isEqualToString:ACTION_SHOW_RTT]) {
        AbtoPhoneMediaQuality *info = [phone readCallMediaQuality:self.callId isVideo:NO];
        NSString *msg;
        if (info) {
            msg = [NSString stringWithFormat:@"%ld : %ld : %ld\n%ld : %ld : %ld : %ld", (long)info.minRtt, (long)info.maxRtt, (long)info.avgRtt, (long)info.minBufferJitter, (long)info.maxBufferJitter, (long)info.avgBufferJitter, (long)info.devBufferJitter ];
        } else {
            msg = @"Info not available";
        }
        
        NSLog(@"msg = %@", msg);
                   
        UIAlertView *stateMessage = [[UIAlertView alloc] initWithTitle:@"RTT Info"
                                                               message:msg
                                                              delegate:nil
                                                     cancelButtonTitle:@"OK"
                                                     otherButtonTitles:nil];
        [stateMessage show];
    }
}

- (void)onCallNotification:(NSNotification *)notification {
    NSInteger status = [[notification object] integerValue];
    NSDictionary *data = [notification userInfo];
    AbtoPhoneInterface* phone = [abtoAppDelegate sharedInstance].phone;
    
    switch (status) {
        case CallEventsConnected:
            [phone setSpeakerphoneOn:NO];
            labelRemoteParty.text = self.number;
            labelRemoteParty.hidden = NO;
            buttonHangUpLadge.hidden = YES;
            buttonHangupMid.hidden = NO;
            buttonHangup.hidden = YES;
            buttonAccept.hidden = YES;
            buttonActions.hidden = NO;
            labelStatus.text = @"Call in progress";//NSLocalizedString(@"INPROGRESS_KEY", @"");
            [UIApplication sharedApplication].idleTimerDisabled = YES;
            break;

        case CallEventsDisconnected:
            [UIApplication sharedApplication].idleTimerDisabled = NO;
            labelRemoteParty.hidden = YES;
            [self closeView];
            [sasMessage dismissWithClickedButtonIndex:0 animated:YES];
            break;
            
        case CallEventsAlerting:
            [phone setSpeakerphoneOn:YES];
            break;
        
        case CallEventsTransfering: {
            NSString *statusText = [data objectForKey:MESSAGE_ARGUMENT];
            NSInteger code = [[data objectForKey:STATUS_ARGUMENT] integerValue];

            if (transferDialog) {
                [transferDialog setMessage:statusText];
            } else {
                if (SYSTEM_VERSION_GREATER_THAN_OR_EQUAL_TO(@"8.0")) {
                    transferDialog = [UIAlertController alertControllerWithTitle:TRANSFER_CALL_DIALOG_HEADER message:TRANSFER_CALL_DIALOG_MESSAGE preferredStyle:UIAlertControllerStyleAlert];
                    [self presentViewController:transferDialog animated:YES completion:nil];
                } else {
                    transferDialog = [[UIAlertView alloc] initWithTitle:TRANSFER_CALL_DIALOG_HEADER message:TRANSFER_CALL_DIALOG_MESSAGE delegate:nil cancelButtonTitle:nil otherButtonTitles:nil];
                    [transferDialog setAlertViewStyle:UIAlertViewStylePlainTextInput];
                    [transferDialog show];
                }
            }

            if ((code >= 200 && code <= 300) || (code >= 400)) {
                dispatch_after(dispatch_time(DISPATCH_TIME_NOW, 3 * NSEC_PER_SEC), dispatch_get_main_queue(), ^{
                    if (SYSTEM_VERSION_GREATER_THAN_OR_EQUAL_TO(@"8.0")) {
                        [transferDialog dismissViewControllerAnimated:YES completion:^{}];
                    } else {
                        [transferDialog dismissWithClickedButtonIndex:0 animated:YES];
                    }
                });
            }
            break;
        }
        case CallEventsZrtpSas: {
            NSString *sas = [data objectForKey:MESSAGE_ARGUMENT];
            sasMessage = [[UIAlertView alloc] initWithTitle:@"Received SAS!"
                                                              message:[NSString stringWithFormat:@"Current SAS: %@", sas]
                                                             delegate:nil
                                                    cancelButtonTitle:@"OK"
                                                    otherButtonTitles:nil];
            
            [sasMessage show];
            break;
        }
        case CallEventsZrtpSecureState: {
            BOOL secured = [[data objectForKey:STATUS_ARGUMENT] boolValue];
            UIAlertView *stateMessage = [[UIAlertView alloc] initWithTitle:@"ZRTP Secure status!"
                                                    message:[NSString stringWithFormat:@"Is Secure %@", secured ? @"yes" : @"no"]
                                                   delegate:nil
                                          cancelButtonTitle:@"OK"
                                          otherButtonTitles:nil];
            
            [stateMessage show];
            break;
        }
        case CallEventsZrtpError: {
            BOOL error = [[data objectForKey:STATUS_ARGUMENT] integerValue];
            NSLog(@"zrtp error = %ld", (long)error);
            break;
        }
        default:
            break;
    }
}

- (void)alertView:(UIAlertView *)alertView clickedButtonAtIndex:(NSInteger)buttonIndex{
    NSString *number = [[alertView textFieldAtIndex:0] text];
    if (number.length > 0) {
        [[abtoAppDelegate sharedInstance].phone transferCall:self.callId toContact:number];
    }
}

@end
