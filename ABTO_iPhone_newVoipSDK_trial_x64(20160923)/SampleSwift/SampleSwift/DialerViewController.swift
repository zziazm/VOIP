//
//  DialerViewController.swift
//  SampleSwift
//
//  Created by Nazariy Vlizlo on 10/22/15.
//  Copyright © 2015 ABTO Software. All rights reserved.
//

import UIKit

let AUDIO_BUTTON_TAG = 0
let VIDEO_BUTTON_TAG = 1

class DialerViewController: UIViewController, UITextFieldDelegate {

    @IBOutlet weak var sipNumberTextField: SipNumberTextField!
    
    override func viewDidLoad() {
        super.viewDidLoad()
        NSNotificationCenter.defaultCenter().addObserver(self, selector: #selector(DialerViewController.onConnectionStatusNotification(_:)), name: NOTIFICATION_PHONE_EVENT, object: nil)
    }
    
    override func viewWillAppear(animated: Bool) {
        super.viewWillAppear(animated)
        navigationController?.setNavigationBarHidden(true, animated: false)
        UIDevice.currentDevice().proximityMonitoringEnabled = false
    }
    
    override func touchesBegan(touches: Set<UITouch>, withEvent event: UIEvent?) {
        sipNumberTextField.resignFirstResponder()
    }
    
    @IBAction func makeCall(sender: UIButton) {
        let ownNumber = AppDelegate.sharedInstance().phone?.config().regUser
        if !ownNumber!.isEmpty || sipNumberTextField.text != ownNumber {
            sipNumberTextField.resignFirstResponder()
            var callViewController: CallViewController?
            
            switch sender.tag {
            case AUDIO_BUTTON_TAG:
                callViewController = storyboard?.instantiateViewControllerWithIdentifier("AudioCallVC") as! AudioCallViewController
            case VIDEO_BUTTON_TAG:
                callViewController = storyboard?.instantiateViewControllerWithIdentifier("VideoCallVC") as! VideoCallViewController
            default:
                break
            }
            callViewController?.number = sipNumberTextField.text
            navigationController?.pushViewController(callViewController!, animated: true)
        }
    }
    
    @IBAction func logingOff(sender: UIButton) {
        AppDelegate.sharedInstance().phone?.unregister()
    }
    
    func onConnectionStatusNotification(notification: NSNotification) {
        let status = PhoneEvents(rawValue: notification.object!.integerValue)
        let _ = status! == .RegSuccess
    }
    
    func textFieldShouldReturn(textField: UITextField) -> Bool {
        return textField.resignFirstResponder()
    }
    
    deinit {
        NSNotificationCenter.defaultCenter().removeObserver(self)
    }
}
