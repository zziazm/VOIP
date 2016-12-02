//
//  ImTableViewController.swift
//  SampleSwift
//
//  Created by Nazariy Vlizlo on 10/23/15.
//  Copyright © 2015 ABTO Software. All rights reserved.
//

import UIKit

class ImTableViewController: UITableViewController {

    let appDelegate = AppDelegate.sharedInstance()
    
    override func viewDidLoad() {
        super.viewDidLoad()
        tableView.backgroundView = UIImageView(image: UIImage(named: "Default"))
        
        
        NSNotificationCenter.defaultCenter().addObserver(self, selector: #selector(ImTableViewController.onNewIm), name: NOTIFICATION_NEW_IM, object: nil)
        NSNotificationCenter.defaultCenter().addObserver(self, selector: #selector(ImTableViewController.onConnectionStatusNotification(_:)), name: NOTIFICATION_PHONE_EVENT, object: nil)
        
    }
    
    override func viewWillAppear(animated: Bool) {
        super.viewWillAppear(animated)
        tabBarController?.navigationItem.title = "IM"
        tabBarController?.navigationController?.setNavigationBarHidden(false, animated: false)
        tabBarController?.navigationItem.setHidesBackButton(true, animated: false)
        tabBarController?.navigationItem.setRightBarButtonItem(UIBarButtonItem(title: "New", style: .Plain, target: self, action: #selector(ImTableViewController.onButtonNewIm(_:))), animated: true)
        appDelegate.restoreIms()
        tableView.reloadData()
        reloadBadge()
    }
    
    func reloadBadge() {
        let newImageCount = newImCount()
        navigationController?.tabBarItem.badgeValue = newImageCount != 0 ? "\(newImageCount)" : nil
    }
    
    @IBAction func onRemoveMessage(sender: UIButton) {
        appDelegate.imMessages?.removeAtIndex(sender.tag)
        appDelegate.storeIms()
        tableView.reloadData()
    }

    // MARK: - Table view data source

    override func tableView(tableView: UITableView, numberOfRowsInSection section: Int) -> Int {
        return appDelegate.imMessages!.count
    }
    
    override func tableView(tableView: UITableView, cellForRowAtIndexPath indexPath: NSIndexPath) -> UITableViewCell {
        let cell = tableView.dequeueReusableCellWithIdentifier("ImCell", forIndexPath: indexPath) as! ImTableViewCell
        let message = appDelegate.imMessages![indexPath.row]
        let isIncoming = !(message.from == appDelegate.phone?.config().regUser)
        
        cell.title.text = isIncoming ? message.from : message.to
        cell.title.textColor = !message.isRead! ? UIColor.redColor() : (isIncoming ? UIColor.blueColor() : UIColor.blackColor())
        cell.removeButton.tag = indexPath.row
        return cell
    }
    
    override func tableView(tableView: UITableView, didSelectRowAtIndexPath indexPath: NSIndexPath) {
        let message = appDelegate.imMessages![indexPath.row]
        let isIncoming = !(message.from == appDelegate.phone?.config().regUser)
        
        let contact = isIncoming ? message.from : message.to
        let text = message.text ?? ""
        
        didSelectImWithContact(contact!, andText: text)
        
        message.isRead = true
        
        appDelegate.storeIms()
    }
    
    //MARK: IM
    
    func newImCount() -> Int {
        var count = 0
        for i in 0..<appDelegate.imMessages!.count {
            let msg = appDelegate.imMessages![i]
            if !msg.isRead! {
                count += 1
            }
        }
        return count
    }
    
    func didSelectImWithContact(contact: String, andText text: String) {
        appDelegate.storeIms()
        let imController = storyboard?.instantiateViewControllerWithIdentifier("ImMessage") as! ImMessageViewController
        imController.imContact = contact
        imController.imText = text
        navigationController?.pushViewController(imController, animated: true)
    }
    
    func onNewIm() {
        reloadBadge()
        tableView.reloadData()
    }
    
    @IBAction func onButtonNewIm(sender: UIButton) {
        let imController = storyboard?.instantiateViewControllerWithIdentifier("ImMessage") as! ImMessageViewController
        navigationController?.pushViewController(imController, animated: true)
    }
    
    func onConnectionStatusNotification(notification: NSNotification) {
        
    }
    
    deinit {
        NSNotificationCenter.defaultCenter().removeObserver(self)
    }

}
