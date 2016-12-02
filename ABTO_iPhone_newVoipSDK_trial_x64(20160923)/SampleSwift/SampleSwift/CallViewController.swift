//
//  CallViewController.swift
//  SampleSwift
//
//  Created by Nazariy Vlizlo on 10/19/15.
//  Copyright © 2015 ABTO Software. All rights reserved.
//

import UIKit

class CallViewController: UIViewController, UITextFieldDelegate {
    
    var number: String?
    var callId: Int?
    var incoming: Bool?
    
    override func viewDidLoad() {
        super.viewDidLoad()
        NSNotificationCenter.defaultCenter().addObserver(self, selector: #selector(CallViewController.onConnectionStatusNotification(_:)), name: NOTIFICATION_PHONE_EVENT, object: nil)
    }

    override func viewWillAppear(animated: Bool) {
        super.viewWillAppear(animated)
        navigationController?.setNavigationBarHidden(true, animated: false)
        NSNotificationCenter.defaultCenter().addObserver(self, selector: #selector(CallViewController.onCallNotification(_:)), name: NOTIFICATION_CALL_EVENT, object: nil)
    }
    
    func closeView() {
        if self == navigationController?.topViewController {
            navigationController?.popViewControllerAnimated(true)
        }
    }
    
    func onCallNotification(notification: NSNotification) {
        
    }
    
    func onConnectionStatusNotification(notification: NSNotification) {
        
    }
    
    func textFieldShouldReturn(textField: UITextField) -> Bool {
        return textField.resignFirstResponder()
    }
    
    deinit {
        NSNotificationCenter.defaultCenter().removeObserver(self)
    }

}
