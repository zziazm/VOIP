//
//  ImMessageViewController.swift
//  SampleSwift
//
//  Created by Nazariy Vlizlo on 10/26/15.
//  Copyright © 2015 ABTO Software. All rights reserved.
//

import UIKit

class ImMessageViewController: UIViewController, UITextViewDelegate, UITextFieldDelegate {
    
    @IBOutlet weak var contactAdressBar: UITextField!
    @IBOutlet weak var textView: UITextView!
    
    var isReadyToSent = false
    var isNew = false
    
    var imContact: String?
    var imText: String?
    
    init(contact: String, text: String) {
        imContact = contact
        imText = text
        isNew = false
        super.init(nibName: nil, bundle: nil)
    }
    
    required init?(coder aDecoder: NSCoder) {
        super.init(coder: aDecoder)
    }
    
    init() {
        super.init(nibName: nil, bundle: nil)
        imContact = nil
        imText = nil
        isNew = true
    }
    
    override func viewDidLoad() {
        super.viewDidLoad()
        navigationItem.setRightBarButtonItem(UIBarButtonItem(title: "Send", style: .Plain, target: self, action: #selector(ImMessageViewController.onButtonSend(_:))), animated: false)
    }
    
    override func viewWillAppear(animated: Bool) {
        super.viewWillAppear(animated)
        if imContact?.characters.count > 0 && imText?.characters.count > 0 {
            textView.text = imText
            contactAdressBar.text = imContact
        } else {
            
        }
    }
    
    @IBAction func onButtonBack(sender: UIButton) {
        if contactAdressBar.isFirstResponder() {
            contactAdressBar.resignFirstResponder()
        }
        if textView.isFirstResponder() {
            textView.resignFirstResponder()
        }
    }
    
    @IBAction func onButtonSend(sender: UIBarButtonItem) {
        if isNew {
            if contactAdressBar.text!.isEmpty {
                contactAdressBar.becomeFirstResponder()
                return
            }
            if textView.text!.isEmpty {
                textView.becomeFirstResponder()
                return
            }
            
            let appDelegate = AppDelegate.sharedInstance()
            let phone = appDelegate.phone
            
            if phone!.sendTextMessage(contactAdressBar.text, withBody: textView.text) {
                let message = ImMessage()
                message.text = textView.text
                message.from = phone?.config().regUser
                message.to = contactAdressBar.text
                message.isRead = true
                
                appDelegate.addMessage(message)
                appDelegate.storeIms()
            }
            navigationController?.popViewControllerAnimated(true)
        } else {
            isNew = true
            sender.title = "Send"
            textView.text = ""
        }
    }
    
    func textViewDidBeginEditing(textView: UITextView) {
        if !isNew {
            self.textView.text = ""
        }
        isNew = true
        textView.frame = CGRectMake(20, 102, 280, 130)
    }
    
    func textViewDidEndEditing(textView: UITextView) {
        textView.frame = CGRectMake(20, 102, 280, 130)
    }
    
    func textFieldDidBeginEditing(textField: UITextField) {
        if !isNew {
            self.textView.text = ""
        }
        isNew = true
    }
    
    func textFieldShouldReturn(textField: UITextField) -> Bool {
        return textField.resignFirstResponder()
    }
    
    deinit {
        
    }
}
