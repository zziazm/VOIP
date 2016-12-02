//
//  AppDelegate.swift
//  SampleSwift
//
//  Created by Nazariy Vlizlo on 9/14/15.
//  Copyright (c) 2015 ABTO Software. All rights reserved.
//

import UIKit

let kNotifKey = "key"
let kNotifKey_IncomingCall = "ical"
let kNotifKey_IncomingMsg = "imsg"
let kNotifCall_SessionId = "sid"
let kNotifCall_RemoteInfo = "rinf"
let kNotifKey_IncomingIm = "iim"

class ImMessage {
    var from: String?
    var to: String?
    var text: String?
    var isRead: Bool?
}

@UIApplicationMain

class AppDelegate: UIResponder, UIApplicationDelegate, AbtoPhoneInterfaceObserver {
    
    var window: UIWindow?
    var navController: UINavigationController?
    var lastCallNotification: UILocalNotification?
    var checkIconLaunch: Bool?
    var imMessages: [ImMessage]?
    var phone: AbtoPhoneInterface?
    //var config: AbtoPhoneConfig?
    
    func application(application: UIApplication, didFinishLaunchingWithOptions launchOptions: [NSObject: AnyObject]?) -> Bool {
        if UIApplication.instancesRespondToSelector(#selector(UIApplication.registerUserNotificationSettings(_:))) {
            application.registerUserNotificationSettings(UIUserNotificationSettings(forTypes: [.Alert, .Badge, .Sound], categories: nil))
        }
        
        initAppearance()
        restoreIms()
        
        phone = AbtoPhoneInterface()
        phone?.initialize(self)
        phone?.config().loadFromUserDefaults(SETTINGS_KEY)
        
        NSNotificationCenter.defaultCenter().addObserver(self, selector: #selector(AppDelegate.createNotificationChecker(_:)), name: UIApplicationDidFinishLaunchingNotification, object: nil)
        NSNotificationCenter.defaultCenter().addObserver(self, selector: #selector(AppDelegate.createNotificationChecker(_:)), name: UIApplicationWillEnterForegroundNotification, object: nil)
        
        return true
    }
    
    func createNotificationChecker(notification: NSNotification) {
        let launchOptions = notification.userInfo
        let localNotification = launchOptions?[UIApplicationLaunchOptionsLocalNotificationKey] as? UILocalNotification
        checkIconLaunch = localNotification == nil
    }
    
    func initAppearance() {
        UINavigationBar.appearance().barTintColor = RGBA(45, 125, 0, 0.7)
        UINavigationBar.appearance().tintColor = RGBA(0, 50, 115, 0.8)
        
        UITabBar.appearance().barTintColor = RGBA(45, 80, 0, 0.7)
        UITabBar.appearance().tintColor = RGBA(0, 50, 115, 0.8)
    }
    
    func applicationWillResignActive(application: UIApplication) {
        //application.scheduledLocalNotifications
    }
    
    func applicationDidEnterBackground(application: UIApplication) {
        phone?.keepAwake(true)
    }
    
    func applicationWillEnterForeground(application: UIApplication) {
        phone?.keepAwake(false)
        UIApplication.sharedApplication().applicationIconBadgeNumber = 0
    }
    
    func applicationDidBecomeActive(application: UIApplication) {
        if checkIconLaunch! {
            checkIconLaunch = false
            if lastCallNotification != nil {
                let data = lastCallNotification!.userInfo!
                let userInfo = [CALL_ID_ARGUMENT: data[kNotifCall_SessionId]!, CONTACT_ARGUMENT: data[kNotifCall_RemoteInfo]!]
                NSNotificationCenter.defaultCenter().postNotificationName(NOTIFICATION_CALL_EVENT, object: CallEvents.Incoming.rawValue, userInfo: userInfo)
                lastCallNotification = nil
            }
        }
    }
    
    func applicationWillTerminate(application: UIApplication) {
        phone?.deinitialize()
    }
    
    func application(application: UIApplication, didReceiveLocalNotification notification: UILocalNotification) {
        let notifKey = notification.userInfo?[kNotifKey] as? String
        if notifKey == kNotifKey_IncomingCall {
            application.applicationIconBadgeNumber -= notification.applicationIconBadgeNumber
        } else if notifKey == kNotifKey_IncomingIm {
            application.applicationIconBadgeNumber -= notification.applicationIconBadgeNumber
            NSNotificationCenter.defaultCenter().postNotificationName(NOTIFICATION_NEW_IM, object: nil)
        }
    }
    
    class func sharedInstance() -> AppDelegate {
        return UIApplication.sharedApplication().delegate as! AppDelegate
    }
    
    func addMessage(message: ImMessage) {
        imMessages! += [message]
    }
    
    func storeIms() {
        let history = NSMutableArray()
        if let messages = imMessages {
            for i in 0..<messages.count {
                let message = messages[i]
                let entry = [
                    IM_TO_KEY: message.to!,
                    IM_FROM_KEY: message.from!,
                    IM_BODY_KEY: message.text!,
                    IM_IS_READ_KEY: message.isRead! ? "YES" : "NO"
                ]
                history.addObject(NSDictionary(dictionary: entry))
            }
        }
        let defaults = NSUserDefaults.standardUserDefaults()
        defaults.setObject(history, forKey: IM_HISTORY_KEY)
        defaults.synchronize()
    }
    
    func restoreIms() {
        if imMessages?.isEmpty == false {
            imMessages?.removeAll()
        } else {
            imMessages = [ImMessage]()
        }
        let userDefaults = NSUserDefaults.standardUserDefaults()
        let history = userDefaults.objectForKey(IM_HISTORY_KEY) as? NSMutableArray
        if let array = history {
            for i in 0..<array.count {
                let entry = array[i] as? NSDictionary
                let message = ImMessage()
                message.to = entry?[IM_TO_KEY] as? String
                message.from = entry?[IM_FROM_KEY] as? String
                message.text = entry?[IM_BODY_KEY] as? String
                message.isRead = (entry?[IM_IS_READ_KEY] as? String) == "YES"
                
                imMessages! += [message]
            }
        }
    }
    
    //MARK: Abto SIP SDK Delegate
    
    func onRegistered(accId: Int) {
        NSNotificationCenter.defaultCenter().postNotificationName(NOTIFICATION_PHONE_EVENT, object: PhoneEvents.RegSuccess.rawValue)
    }
    
    func onRegistrationFailed(accId: Int, statusCode: Int32, statusText: String!) {
        NSNotificationCenter.defaultCenter().postNotificationName(NOTIFICATION_PHONE_EVENT, object: PhoneEvents.RegFailed.rawValue)
    }
    
    func onUnRegistered(accId: Int) {
        NSNotificationCenter.defaultCenter().postNotificationName(NOTIFICATION_PHONE_EVENT, object: PhoneEvents.UnregSuccess.rawValue)
    }
    
    func onRemoteAlerting(accId: Int, statusCode: Int32) {
        NSNotificationCenter.defaultCenter().postNotificationName(NOTIFICATION_PHONE_EVENT, object: PhoneEvents.RemoteAlerting.rawValue)
    }
    
    
    func onIncomingCall(callId: Int, remoteContact: String!) {
        NSNotificationCenter.defaultCenter().postNotificationName(NOTIFICATION_CALL_EVENT, object: CallEvents.Incoming.rawValue, userInfo: [CALL_ID_ARGUMENT: callId, CONTACT_ARGUMENT: remoteContact])
    }
    
    func onCallConnected(callId: Int, remoteContact: String!) {
        NSNotificationCenter.defaultCenter().postNotificationName(NOTIFICATION_CALL_EVENT, object: CallEvents.Connected.rawValue, userInfo: [CALL_ID_ARGUMENT: callId])
    }
    
    func onCallDisconnected(callId: Int, remoteContact: String!, statusCode: Int, message: String!) {
        NSNotificationCenter.defaultCenter().postNotificationName(NOTIFICATION_CALL_EVENT, object: CallEvents.Disconnected.rawValue, userInfo: [CALL_ID_ARGUMENT: callId, STATUS_ARGUMENT: statusCode])
    }
    
    func onCallAlerting(callId: Int, statusCode: Int32) {
        NSNotificationCenter.defaultCenter().postNotificationName(NOTIFICATION_CALL_EVENT, object: CallEvents.Alerting.rawValue, userInfo: [CALL_ID_ARGUMENT: callId, STATUS_ARGUMENT: Int(statusCode)])
    }
    
    
    func onCallHeld(callId: Int, state: Bool) {
        
    }
    
    func onToneReceived(callId: Int, tone: Int) {
        
    }
    
    func onTextMessageReceived(from: String!, to: String!, body: String!) {
        let message = ImMessage()
        message.from = AbtoPhoneInterface.sipUriUsername(from)
        message.to = AbtoPhoneInterface.sipUriUsername(to)
        message.text = body
        message.isRead = false
        
        addMessage(message)
        storeIms()
        let app = UIApplication.sharedApplication()
        let state = app.applicationState
        
        if state == .Background || state == .Inactive {
            let localNotif = UILocalNotification()
            localNotif.alertBody = "IM from \(from)"
            localNotif.soundName = UILocalNotificationDefaultSoundName
            app.applicationIconBadgeNumber += 1
            localNotif.applicationIconBadgeNumber = app.applicationIconBadgeNumber
            localNotif.repeatInterval = NSCalendarUnit(rawValue: 0)
            
            localNotif.userInfo = [kNotifKey: kNotifKey_IncomingIm]
            app.presentLocalNotificationNow(localNotif)
        } else {
            NSNotificationCenter.defaultCenter().postNotificationName(NOTIFICATION_NEW_IM, object: nil)
        }
    }
    func onTextMessageStatus(address: String!, reason: String!, status: Bool) {
        
    }
    
    func onPresenceChanged(uri: String!, status: PhoneBuddyStatus, note: String!) {
        
    }
    
    func onTransferStatus(callId: Int, statusCode: Int32, message: String!) {
        NSNotificationCenter.defaultCenter().postNotificationName(NOTIFICATION_CALL_EVENT, object: CallEvents.Transfering.rawValue, userInfo: [CALL_ID_ARGUMENT: callId, STATUS_ARGUMENT : Int(statusCode), MESSAGE_ARGUMENT : message])
    }
}

