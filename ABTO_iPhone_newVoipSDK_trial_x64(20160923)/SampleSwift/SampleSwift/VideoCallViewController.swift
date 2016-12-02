//
//  VideoCallViewController.swift
//  SampleSwift
//
//  Created by Nazariy Vlizlo on 10/23/15.
//  Copyright © 2015 ABTO Software. All rights reserved.
//

import UIKit

let ACTION_START_RECORDING = "Start Recording"
let ACTION_STOP_RECORDING = "Stop Recording"

class VideoCallViewController: CallViewController {
    
    @IBOutlet weak var labelRemoteParty: UILabel!
    @IBOutlet weak var labelStatus: UILabel!
    @IBOutlet weak var imageViewRemoteVideo: UIImageView!
    @IBOutlet weak var recordingLabel: UILabel!
    @IBOutlet weak var viewLocalVideo: UIImageView!
    @IBOutlet weak var buttonPick: UIButton!
    @IBOutlet weak var buttonHangup: UIButton!
    @IBOutlet weak var switchCameraButton: UIButton!
    @IBOutlet weak var buttonHangupLadge: UIButton!
    @IBOutlet weak var buttonActions: UIButton!
    @IBOutlet weak var stopVideoButton: UIButton!
    @IBOutlet weak var dtmfInput: UITextField!
    
    var sendingVideo = false
    var isRecordng = false
    var enableSpeaker = true
    var isFrontCamera = false
    var isVideoMute = false
    
    var dtmfLen = 0
    
    override func viewDidLoad() {
        super.viewDidLoad()
    }
    
    override func viewWillAppear(animated: Bool) {
        super.viewWillAppear(animated)
        UIDevice.currentDevice().proximityMonitoringEnabled  = true
        let phone = AppDelegate.sharedInstance().phone
        
        phone?.setRemoteView(imageViewRemoteVideo)
        phone?.setLocalView(viewLocalVideo)
        
        if incoming == true {
            labelStatus.text = "Incoming video call from"
            buttonHangup.hidden = false
            buttonPick.hidden = false
            buttonHangupLadge.hidden = true
        } else {
            callId = phone?.startCall(number, withVideo: true)
            labelStatus.text = "Dialing"
            
            buttonPick.hidden = true
            buttonHangup.hidden = true
            buttonHangupLadge.hidden = false
        }
        
        labelRemoteParty.text = number
        labelRemoteParty.hidden = false
        buttonActions.hidden = true
        stopVideoButton.hidden = true
        switchCameraButton.hidden = true
        imageViewRemoteVideo.hidden = true
        viewLocalVideo.hidden = true
    }
    
    override func touchesEnded(touches: Set<UITouch>, withEvent event: UIEvent?) {
        dtmfInput.hidden = true
        dtmfInput.resignFirstResponder()
    }
    
    @IBAction func editingChanged(sender: UITextField) {
        let currentDtmfText = sender.text!
        let len = currentDtmfText.characters.count
        if len > dtmfLen {
            let cur = currentDtmfText.utf16
            let uni = cur[cur.endIndex.advancedBy(-1)]
            AppDelegate.sharedInstance().phone?.sendTone(callId!, tone: uni)
        }
        dtmfLen = len
    }
    
    @IBAction func stopResumeVideo(sender: UIButton) {
        sender.setTitle(sender.tag != 0 ? "Stop video" : "Start video", forState: .Normal)
        AppDelegate.sharedInstance().phone?.muteVideo(callId!, on: sender.tag != 0)
        sender.tag = sender.tag != 0 ? 0 : 1
    }
    
    @IBAction func onActionsClick(sender: UIButton) {
        let phone = AppDelegate.sharedInstance().phone
        let actionsController = UIAlertController(title: nil, message: nil, preferredStyle: .ActionSheet)
        let speakerAction = UIAlertAction(title: enableSpeaker ? ACTION_SPEAKER_OFF : ACTION_SPEAKER_ON, style: .Default) { (alertAction: UIAlertAction!) -> Void in
            self.enableSpeaker = !self.enableSpeaker
            phone?.setSpeakerphoneOn(self.enableSpeaker)
        }
        let openDTMFAction = UIAlertAction(title: ACTION_OPEN_DTMF, style: .Default) { (alertAction: UIAlertAction!) -> Void in
            self.dtmfInput.hidden = false
            self.dtmfInput.becomeFirstResponder()
        }
        let recordingAction = UIAlertAction(title: isRecordng ? ACTION_STOP_RECORDING : ACTION_START_RECORDING, style: .Default) { (alertAction: UIAlertAction!) -> Void in
            
        }
        let cancel = UIAlertAction(title: "Cancel", style: .Destructive, handler: nil)
        actionsController.addActions([speakerAction, openDTMFAction, recordingAction, cancel])
        presentViewController(actionsController, animated: true, completion: nil)
    }
    
    @IBAction func switchCamera(sender: UIButton) {
        AppDelegate.sharedInstance().phone?.switchCameraToFront(callId!, on: sender.tag != 0)
        sender.tag = sender.tag != 0 ? 0 : 1
    }
    
    @IBAction func onButtonClick(sender: UIButton) {
        let phone = AppDelegate.sharedInstance().phone
        sender.tag == 0 ? phone?.answerCall(callId!, status: 200, withVideo: true) : phone?.hangUpCall(callId!, status: 486)
    }
    
    override func onCallNotification(notification: NSNotification) {
        let status = CallEvents(rawValue: notification.object!.integerValue)!
        let phone = AppDelegate.sharedInstance().phone
        
        switch status {
        case .Connected:
            labelStatus.text = "Video call"
            buttonPick.hidden = true
            buttonHangup.hidden = true
            buttonHangupLadge.hidden = false
            buttonActions.hidden = false
            stopVideoButton.hidden = false
            switchCameraButton.hidden = false
            
            UIApplication.sharedApplication().idleTimerDisabled = true
            
            viewLocalVideo.layer.borderWidth = 2
            viewLocalVideo.layer.borderColor = UIColor.whiteColor().CGColor
            viewLocalVideo.hidden = false
            
            imageViewRemoteVideo.layer.borderWidth = 2
            imageViewRemoteVideo.layer.borderColor = UIColor.whiteColor().CGColor
            imageViewRemoteVideo.hidden = false
        case .Disconnected:
            labelStatus.text = "Hanging"
            stopVideoButton.hidden = true
            switchCameraButton.hidden = true
            buttonActions.hidden = true
            labelRemoteParty.hidden = true
            UIApplication.sharedApplication().idleTimerDisabled = false
            
            phone?.setRemoteView(nil)
            phone?.setLocalView(nil)
            closeView()
        case .Alerting:
            phone?.setSpeakerphoneOn(true)
        default:
            break
        }
    }
}
