//
//  MainTabBarController.swift
//  SampleSwift
//
//  Created by Nazariy Vlizlo on 10/26/15.
//  Copyright © 2015 ABTO Software. All rights reserved.
//

import UIKit

class MainTabBarController: UITabBarController {

    override func viewDidLoad() {
        super.viewDidLoad()
        NSNotificationCenter.defaultCenter().addObserver(self, selector:#selector(onConnectionStatusNotification), name: NOTIFICATION_PHONE_EVENT, object: nil)
    }
    
    override func viewWillAppear(animated: Bool) {
        super.viewWillAppear(animated)
    }
    
    override func viewWillDisappear(animated: Bool) {
        super.viewWillDisappear(animated)
        navigationController?.setNavigationBarHidden(false, animated: false)
    }
    
    func onConnectionStatusNotification(notification: NSNotification) {
        let status = PhoneEvents(rawValue: notification.object!.integerValue)!
        switch status {
        case .RegFailed:
            break
        case .UnregFailed:
            break
        case .UnregSuccess:
            navigationController?.popToRootViewControllerAnimated(true)
        default:
            break
        }
    }
    
    deinit {
        NSNotificationCenter.defaultCenter().removeObserver(self)
    }
}
