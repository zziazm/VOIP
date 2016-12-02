//
//  MainPageViewController.swift
//  SampleSwift
//
//  Created by Nazariy Vlizlo on 10/19/15.
//  Copyright © 2015 ABTO Software. All rights reserved.
//

import UIKit

class MainPageViewController: UIViewController, UITextFieldDelegate {
    
    @IBOutlet weak var activityIndicator: UIActivityIndicatorView!
    @IBOutlet weak var name: UITextField!
    @IBOutlet weak var password: UITextField!
    @IBOutlet weak var domain: UITextField!
    @IBOutlet weak var buttonEnter: UIButton!
    
    //MARK:ViewController Lifecycle
    
    override func viewDidLoad() {
        super.viewDidLoad()
        refreshFields()

        NSNotificationCenter.defaultCenter().addObserver(self, selector:#selector(MainPageViewController.onCallNotification(_:)), name: NOTIFICATION_CALL_EVENT, object: nil)
    }
    
    override func viewWillAppear(animated: Bool) {
        super.viewWillAppear(animated)
        navigationController?.setNavigationBarHidden(true, animated: false)
    }
    
    override func viewDidAppear(animated: Bool) {
        super.viewDidAppear(animated)
        refreshFields()
        activityIndicator.stopAnimating()
        NSNotificationCenter.defaultCenter().addObserver(self, selector:#selector(MainPageViewController.onConnectionStatusNotification(_:)), name: NOTIFICATION_PHONE_EVENT, object: nil)
    }
    
    override func viewWillDisappear(animated: Bool) {
        super.viewWillDisappear(animated)
        navigationController?.setNavigationBarHidden(false, animated: false)
    }
    
    override func shouldAutorotate() -> Bool {
        let orientation = UIApplication.sharedApplication().statusBarOrientation
        return orientation == .Portrait
    }
    
    override func touchesBegan(touches: Set<UITouch>, withEvent event: UIEvent?) {
        name.resignFirstResponder()
        password.resignFirstResponder()
        domain.resignFirstResponder()
    }
    
    //MARK:Custom methods
    
    func saveChanges() {
        let config = AppDelegate.sharedInstance().phone!.config()
        if let abtoPhoneConfig = config {
            abtoPhoneConfig.regUser = name.text
            abtoPhoneConfig.regPassword = password.text
            abtoPhoneConfig.regDomain = domain.text
            abtoPhoneConfig.enableRingBackTone = true
            abtoPhoneConfig.enableRingTone = true
            abtoPhoneConfig.regExpirationTime = 10
            //abtoPhoneConfig.ringBackToneUrl = "abto_ringbacktone.wav"
            //abtoPhoneConfig.ringToneUrl = "abto_ringtone.mp3"
            abtoPhoneConfig.saveToUserDefaults(SETTINGS_KEY)
        }
    }
    
    func refreshFields() {
        let config = AppDelegate.sharedInstance().phone?.config()
        name.text = config?.regUser
        password.text = config?.regPassword
        domain.text = config?.regDomain
    }
    
    func onCallNotification(notification: NSNotification) {
        let status = CallEvents(rawValue: notification.object as! Int)
        if status == .Incoming {
            let callId = notification.userInfo![CALL_ID_ARGUMENT] as? Int
            let contact = notification.userInfo![CONTACT_ARGUMENT] as? String
            
            if callId != kInvalidCallId {
                let app = UIApplication.sharedApplication()
                let appDelegate = AppDelegate.sharedInstance()
                let remotePartyNumber = AbtoPhoneInterface.sipUriUsername(contact)
                let applicationState = app.applicationState
                appDelegate.phone?.setSpeakerphoneOn(true)
                if applicationState == .Background || applicationState == .Inactive {
                    let localNotification = UILocalNotification()
                    localNotification.alertBody = "\(remotePartyNumber) calling"
                    app.applicationIconBadgeNumber += 1
                    localNotification.applicationIconBadgeNumber = app.applicationIconBadgeNumber
                    localNotification.repeatInterval = NSCalendarUnit(rawValue: 0)
                    let userInfo: [String: AnyObject] = [
                        kNotifKey: kNotifKey_IncomingCall,
                        kNotifCall_SessionId: callId!,
                        kNotifCall_RemoteInfo: contact!
                    ]
                    localNotification.userInfo = userInfo
                    UIApplication.sharedApplication().presentLocalNotificationNow(localNotification)
                    applicationDelegate().lastCallNotification = localNotification
                } else {
                    let nextController = storyboard?.instantiateViewControllerWithIdentifier(appDelegate.phone!.isVideoCall(callId!) ? "VideoCallVC" : "AudioCallVC") as? CallViewController
                    nextController?.number = remotePartyNumber
                    nextController?.callId = callId
                    nextController?.incoming = true
                    navigationController?.pushViewController(nextController!, animated: true)
                }
            }
        } else if status == .Disconnected {
            applicationDelegate().lastCallNotification = nil
        }
    }
    
    func onConnectionStatusNotification(notification: NSNotification) {
        let status = PhoneEvents(rawValue: notification.object!.integerValue)!
        switch status {
        case .RemoteAlerting:
            activityIndicator.startAnimating()
            print("onConnectionStatusNotification ClientConnectionStatusRegistering")
        case .RegSuccess:
            NSNotificationCenter.defaultCenter().removeObserver(self, name: NOTIFICATION_PHONE_EVENT, object: nil)
            activityIndicator.stopAnimating()
            let tabbarVC = storyboard?.instantiateViewControllerWithIdentifier("MainTabBar") as! MainTabBarController
            
            navigationController?.pushViewController(tabbarVC, animated: true)
        case .UnregSuccess:
            activityIndicator.stopAnimating()
            print("onConnectionStatusNotification ClientConnectionStatusUnregistered")
        case .UnregFailed:
            print("onConnectionStatusNotification ClientConnectionStatusDisconnected")
        default:
            activityIndicator.stopAnimating()
        }
    }
    
    //MARK:Actions
    
    @IBAction func enterClick(sender: UIButton) {
        if (domain.text?.characters.count > 0) &&
            (name.text?.characters.count > 0) &&
            (password.text?.characters.count > 0) {
                saveChanges()
                
                if AppDelegate.sharedInstance().phone?.finalizeConfiguration() == true {
                    activityIndicator.startAnimating()
                }
        } else {
            let requiredFieldsAreEmpty = UIAlertView(title: "Required fields are empty", message: "Please fill in all the fields", delegate: nil, cancelButtonTitle: "OK")
            requiredFieldsAreEmpty.show()
        }
    }
    
    @IBAction func settingsClick(sender: UIButton) {
        saveChanges()
    }
    
    func textFieldShouldReturn(textField: UITextField) -> Bool {
        return textField.resignFirstResponder()
    }
    
    deinit {
        NSNotificationCenter.defaultCenter().removeObserver(self)
    }
}
