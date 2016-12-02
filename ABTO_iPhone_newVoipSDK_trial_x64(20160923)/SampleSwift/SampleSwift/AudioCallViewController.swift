//
//  AudioCallViewController.swift
//  SampleSwift
//
//  Created by Nazariy Vlizlo on 10/22/15.
//  Copyright © 2015 ABTO Software. All rights reserved.
//

import UIKit

let UI_BACKGROUND_TAG = 254
let REMOTE_PARTY_TAG = 255
let ACTION_SPEAKER_ON = "Turn Speaker On"
let ACTION_SPEAKER_OFF = "Turn Speaker Off"
let ACTION_OPEN_DTMF = "Send DTMF"
let ACTION_TRANSFER_CALL = "Transfer Call"
let ACTION_HOLD_CALL = "Hold Call"
let ACTION_RESUME_CALL = "Resume Call"
let ACTION_BLUETOOTH_ON = "Turn Bluetooth On"
let ACTION_BLUETOOTH_OFF = "Turn Bluetooth Off"

let TRANSFER_CALL_DIALOG_HEADER = "Transfer call"
let TRANSFER_CALL_DIALOG_MESSAGE = "Enter number to transfer"

class AudioCallViewController: CallViewController {
    
    @IBOutlet weak var audioIcon: UIImageView!
    @IBOutlet weak var labelStatus: UILabel!
    @IBOutlet weak var labelRemoteParty: UILabel!
    @IBOutlet weak var dtmwInput: UITextField!
    @IBOutlet weak var buttonAccept: UIButton!
    @IBOutlet weak var buttonHangup: UIButton!
    @IBOutlet weak var buttonHangupMid: UIButton!
    @IBOutlet weak var buttonHangupLadge: UIButton!
    @IBOutlet weak var buttonActions: UIButton!
    @IBOutlet weak var recordingLabel: UILabel!
    
    var holdCall = false
    var isRecording = false
    var enableSpeaker = false
    var enableBluetooth = false
    var dtmfLen = 0
    
    override func viewDidLoad() {
        super.viewDidLoad()
    }
    
    override func viewWillAppear(animated: Bool) {
        super.viewWillAppear(animated)
        labelRemoteParty.text = number
        UIDevice.currentDevice().proximityMonitoringEnabled = true
        let phone = AppDelegate.sharedInstance().phone
        if incoming == true {
            labelRemoteParty.text = number
            labelRemoteParty.hidden = false;
            buttonHangupLadge.hidden = true;
            buttonHangupMid.hidden = true;
            buttonHangup.hidden = false;
            buttonAccept.hidden = false;
            buttonActions.hidden = true;
            labelStatus.text = "Calling"
        } else {
            callId = phone?.startCall(number, withVideo: false)
            labelRemoteParty.hidden = false;
            buttonHangupLadge.hidden = false;
            buttonHangupMid.hidden = true;
            buttonHangup.hidden = true;
            buttonAccept.hidden = true;
            buttonActions.hidden = true;
            labelStatus.text = "Dialing"
        }
    }
    
    override func touchesEnded(touches: Set<UITouch>, withEvent event: UIEvent?) {
        audioIcon.hidden = false
        dtmwInput.hidden = true
        dtmwInput.resignFirstResponder()
    }
    
    @IBAction func onButtonClick(sender: UIButton) {
        let phone = AppDelegate.sharedInstance().phone
        sender.tag == 0 ? phone?.answerCall(callId!, status: 200, withVideo: false) : phone?.hangUpCall(callId!, status: 486)
    }
    
    @IBAction func onNumericKeyPressed(sender: UITextField) {
        let currentDtmfText = sender.text!
        let len = currentDtmfText.characters.count
        if len > dtmfLen {
            let cur = currentDtmfText.utf16
            let uni = cur[cur.endIndex.advancedBy(-1)]
            AppDelegate.sharedInstance().phone?.sendTone(callId!, tone: uni)
        }
        dtmfLen = len
    }
    
    @IBAction func onActionsClick(sender: UIButton) {
        let phone = AppDelegate.sharedInstance().phone
        let alertController = UIAlertController(title: nil, message: nil, preferredStyle: .ActionSheet)
        
        let actionBluetooth = UIAlertAction(title: enableBluetooth ? ACTION_BLUETOOTH_OFF : ACTION_BLUETOOTH_ON, style: .Default) { (alertAction: UIAlertAction!) -> Void in
            self.enableBluetooth = !self.enableBluetooth
            phone?.setBluetoothOn(self.enableBluetooth)
        }
        let actionEnableSpeaker = UIAlertAction(title: enableSpeaker ? ACTION_SPEAKER_OFF : ACTION_SPEAKER_ON, style: .Default) { (alertAction: UIAlertAction!) -> Void in
            self.enableSpeaker = !self.enableSpeaker
            phone?.setSpeakerphoneOn(self.enableSpeaker)
        }
        let actionHoldCall = UIAlertAction(title: holdCall ? ACTION_RESUME_CALL : ACTION_HOLD_CALL, style: .Default) { (alertAction: UIAlertAction!) -> Void in
            phone?.holdRetriveCall(self.callId!)
            self.holdCall = !self.holdCall
        }
        let actionSendDTMF = UIAlertAction(title: ACTION_OPEN_DTMF, style: .Default) { (alertAction: UIAlertAction!) -> Void in
            UIView.animateWithDuration(0.5) {
                self.audioIcon.hidden = true
                self.dtmwInput.hidden = false
            }
            self.dtmwInput.becomeFirstResponder()
        }
        let actionTransferCall = UIAlertAction(title: ACTION_TRANSFER_CALL, style: .Default) { (alertAction: UIAlertAction!) -> Void in
            let alert = UIAlertController(title: TRANSFER_CALL_DIALOG_HEADER, message: TRANSFER_CALL_DIALOG_MESSAGE, preferredStyle: .Alert)
            let actionOk = UIAlertAction(title: "OK", style: .Default, handler: { (alertAction: UIAlertAction!) -> Void in
                alert.dismissViewControllerAnimated(true, completion: nil)
                let number = alert.textFields?.first?.text
                phone?.transferCall(self.callId!, toContact: number)
            })
            let cancel = UIAlertAction(title: "Cancel", style: .Default, handler: { (alertAction: UIAlertAction!) -> Void in
                alert.dismissViewControllerAnimated(true, completion: nil)
            })
            alert.addTextFieldWithConfigurationHandler({ (textField: UITextField!) -> Void in
                textField.placeholder = "number"
                textField.secureTextEntry = false
            })
            alert.addActions([actionOk, cancel])
            self.presentViewController(alert, animated: true, completion: nil)
        }
        let actionRecording = UIAlertAction(title: isRecording ? ACTION_STOP_RECORDING : ACTION_START_RECORDING, style: .Default) { (alertAction: UIAlertAction!) -> Void in
            if !self.isRecording {
                let locale = NSLocale(localeIdentifier: "en_US_POSIX")
                let formatter = NSDateFormatter()
                formatter.dateFormat = "yyyy_MM_dd_HH_mm_ss"
                formatter.locale = locale
                let filename = "\(NSFileManager.defaultManager().URLsForDirectory(.DocumentDirectory, inDomains: .UserDomainMask).last!.path!)/rec_\(self.number!)_\(formatter.stringFromDate(NSDate())).wav"
                self.isRecording = phone!.startRecordingFor(self.callId!, filePath: filename)
            } else {
                self.isRecording = phone!.stopRecording()
            }
        }
        let cancel = UIAlertAction(title: "Cancel", style: .Destructive, handler: nil)
        alertController.addActions([actionBluetooth, actionEnableSpeaker, actionHoldCall, actionSendDTMF, actionTransferCall, actionRecording, cancel])
        presentViewController(alertController, animated: true, completion: nil)
    }
    
    override func onCallNotification(notification: NSNotification) {
        let status = CallEvents(rawValue: notification.object!.integerValue)!
        let phone = AppDelegate.sharedInstance().phone
        
        switch status {
        case .Connected:
            phone?.setSpeakerphoneOn(false)
            labelRemoteParty.text = number
            labelRemoteParty.hidden = false
            buttonHangupLadge.hidden = true
            buttonHangupMid.hidden = false
            buttonHangup.hidden = true
            buttonAccept.hidden = true
            buttonActions.hidden = false
            labelStatus.text = "Call in progress"
            UIApplication.sharedApplication().idleTimerDisabled = true
        case .Disconnected:
            UIApplication.sharedApplication().idleTimerDisabled = false
            labelRemoteParty.hidden = true
            closeView()
        case .Alerting:
            phone?.setSpeakerphoneOn(true)
        default:
            break
        }
    }
}
