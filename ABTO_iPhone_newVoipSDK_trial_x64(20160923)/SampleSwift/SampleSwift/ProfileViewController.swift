//
//  ProfileViewController.swift
//  SampleSwift
//
//  Created by Nazariy Vlizlo on 10/20/15.
//  Copyright © 2015 ABTO Software. All rights reserved.
//

import UIKit

class ProfileViewController: UIViewController {

    @IBOutlet weak var usernameTextField: UITextField!
    @IBOutlet weak var passwordTextField: UITextField!
    @IBOutlet weak var domainTextField: UITextField!
    @IBOutlet weak var authIdTextField: UITextField!
    @IBOutlet weak var contactTextField: UITextField!
    
    override func viewDidLoad() {
        super.viewDidLoad()
    }
    
    override func viewWillAppear(animated: Bool) {
        super.viewWillAppear(animated)
        let phone = AppDelegate.sharedInstance().phone
        tabBarController!.navigationItem.rightBarButtonItem = nil
        usernameTextField.text = phone?.config().regUser
        passwordTextField.text = phone?.config().regPassword
        authIdTextField.text = phone?.config().regAuthId
        contactTextField.text = phone?.config().displayName
        domainTextField.text = phone?.config().regDomain
    }
    
    override func viewWillDisappear(animated: Bool) {
        super.viewWillDisappear(animated)
        saveSettings()
    }
    
    override func touchesBegan(touches: Set<UITouch>, withEvent event: UIEvent?) {
        usernameTextField.resignFirstResponder()
        passwordTextField.resignFirstResponder()
        domainTextField.resignFirstResponder()
        authIdTextField.resignFirstResponder()
        domainTextField.resignFirstResponder()
    }
        
    func saveSettings() {
        let config = AppDelegate.sharedInstance().phone?.config()
        
        config?.regUser = usernameTextField.text
        config?.regPassword = passwordTextField.text
        config?.regAuthId = authIdTextField.text
        config?.displayName = contactTextField.text
        config?.regDomain = domainTextField.text
        
        config?.saveToUserDefaults(SETTINGS_KEY)
    }
}
