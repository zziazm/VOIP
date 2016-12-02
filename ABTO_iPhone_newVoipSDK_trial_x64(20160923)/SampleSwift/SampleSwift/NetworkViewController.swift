//
//  NetworkViewController.swift
//  SampleSwift
//
//  Created by Nazariy Vlizlo on 10/20/15.
//  Copyright © 2015 ABTO Software. All rights reserved.
//

import UIKit

class NetworkViewController: UIViewController {

    @IBOutlet weak var stunTextField: UITextField!
    @IBOutlet weak var proxyTextField: UITextField!
    @IBOutlet weak var srtpSwitch: UISwitch!
    @IBOutlet weak var transportSegmentControl: UISegmentedControl!
    
    override func viewDidLoad() {
        super.viewDidLoad()
    }
    
    override func viewWillAppear(animated: Bool) {
        super.viewWillAppear(animated)
        tabBarController!.navigationItem.rightBarButtonItem = nil
        let config = AppDelegate.sharedInstance().phone?.config()
        stunTextField.text = config?.stun
        proxyTextField.text = config?.proxy
        srtpSwitch.on = (config?.enableSrtp)!
        transportSegmentControl.selectedSegmentIndex = config!.signalingTransport.rawValue
    }
    
    override func viewWillDisappear(animated: Bool) {
        super.viewWillDisappear(animated)
        saveSettings()
    }
    
    override func touchesBegan(touches: Set<UITouch>, withEvent event: UIEvent?) {
        stunTextField.resignFirstResponder()
        proxyTextField.resignFirstResponder()
    }
    
    func saveSettings() {
        let config = AppDelegate.sharedInstance().phone?.config()

        config?.stun = stunTextField.text
        config?.proxy = proxyTextField.text
        config?.enableSrtp = srtpSwitch.on
        
        config?.signalingTransport = PhoneSignalingTransport(rawValue: transportSegmentControl.selectedSegmentIndex)!
        
        config?.saveToUserDefaults(SETTINGS_KEY)
    }
}
