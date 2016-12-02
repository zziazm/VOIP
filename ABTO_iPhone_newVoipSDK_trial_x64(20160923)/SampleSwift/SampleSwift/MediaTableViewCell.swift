//
//  MediaTableViewCell.swift
//  SampleSwift
//
//  Created by Nazariy Vlizlo on 10/21/15.
//  Copyright © 2015 ABTO Software. All rights reserved.
//

import UIKit

class MediaTableViewCell: UITableViewCell {

    @IBOutlet weak var codecNameLabel: UILabel!
    @IBOutlet weak var codecSwitch: UISwitch!
    
    override func awakeFromNib() {
        super.awakeFromNib()
        // Initialization code
    }

    override func setSelected(selected: Bool, animated: Bool) {
        super.setSelected(selected, animated: animated)
    }
}
