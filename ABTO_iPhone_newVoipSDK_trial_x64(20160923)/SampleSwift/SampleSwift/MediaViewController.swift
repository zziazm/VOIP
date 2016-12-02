//
//  MediaViewController.swift
//  SampleSwift
//
//  Created by Nazariy Vlizlo on 10/20/15.
//  Copyright © 2015 ABTO Software. All rights reserved.
//

import UIKit

let audioTableViewTag = 0
let videoTableViewTag = 1

class MediaViewController: UIViewController, UITableViewDataSource, UITableViewDelegate {
    
    var audioCodecInfo = [Int]()
    var videoCodecInfo = [Int]()
    var codecInfo = [Int]()
    var mediaTableView: UITableView?
    let config = AppDelegate.sharedInstance().phone?.config()
    override func viewDidLoad() {
        super.viewDidLoad()
        mediaTableView?.backgroundView = nil
        for codec in (PhoneAudioVideoCodec.None.rawValue + 1)...PhoneAudioVideoCodec.Count.rawValue {
            switch AbtoPhoneConfig.codecType(PhoneAudioVideoCodec(rawValue: codec)!) {
            case .Audio:
                audioCodecInfo += [codec]
            case .Video:
                videoCodecInfo += [codec]
            case .Unsupported:
                break
            }
        }
    }
    
    override func viewWillAppear(animated: Bool) {
        super.viewWillAppear(animated)
        tabBarController!.navigationItem.setRightBarButtonItem(UIBarButtonItem(title: "Reorder", style: .Done, target: self, action: #selector(MediaViewController.toggleEdit(_:))), animated: true)
    }
    
    override func viewWillDisappear(animated: Bool) {
        super.viewWillDisappear(animated)
        config?.saveToUserDefaults(SETTINGS_KEY)
    }
    
    @IBAction func toggleEdit(sender: UIBarButtonItem) {
        mediaTableView!.setEditing(!mediaTableView!.editing, animated: true)
        sender.title = mediaTableView!.editing ? "Done" : "Reorder"
    }
    
    func tableView(tableView: UITableView, numberOfRowsInSection section: Int) -> Int {
        codecInfo = (tableView.tag == audioTableViewTag) ? audioCodecInfo : videoCodecInfo
        title = (tableView.tag == audioTableViewTag) ? "Audio Codecs" : "Video codecs"
        mediaTableView = tableView
        return codecInfo.count
    }
    
    func tableView(tableView: UITableView, cellForRowAtIndexPath indexPath: NSIndexPath) -> UITableViewCell {
        let cell = tableView.dequeueReusableCellWithIdentifier("CodecCell", forIndexPath: indexPath) as? MediaTableViewCell
        let codecIdx = PhoneAudioVideoCodec(rawValue: codecInfo[indexPath.row])!
        cell?.codecNameLabel.text = AbtoPhoneConfig.codecName(codecIdx)
        cell?.codecSwitch.on = config!.codecPriority(codecIdx) != 0
        cell?.codecSwitch.tag = codecInfo[indexPath.row]
        cell?.showsReorderControl = true
        return cell!
    }
    
    func tableView(tableView: UITableView, canMoveRowAtIndexPath indexPath: NSIndexPath) -> Bool {
        return true
    }
    
    func tableView(tableView: UITableView, moveRowAtIndexPath sourceIndexPath: NSIndexPath, toIndexPath destinationIndexPath: NSIndexPath) {
        codecInfo.insert(codecInfo[sourceIndexPath.row], atIndex: destinationIndexPath.row)
        codecInfo.removeAtIndex(sourceIndexPath.row)
        reorderCodecPriority(AppDelegate.sharedInstance().phone!.config())
    }
    
    @IBAction func codecSwitched(sender: UISwitch) {
        let codecIdx = PhoneAudioVideoCodec(rawValue: sender.tag)!
        config?.setCodecPriority(codecIdx, priority: sender.on ? BASE_CODEC_PRIORITY : 0)
        
        reorderCodecPriority(config!)
    }
    
    func reorderCodecPriority(config: AbtoPhoneConfig) {
        var value = BASE_CODEC_PRIORITY
        let enumerator = codecInfo.reverse()
        for codec in  enumerator {
            let codecIdx = PhoneAudioVideoCodec(rawValue: codec)!
            if config.codecPriority(codecIdx) >= BASE_CODEC_PRIORITY {
                config.setCodecPriority(codecIdx, priority: value)
                value += 1
            }
        }
    }
}
