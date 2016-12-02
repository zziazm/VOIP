//
//  ImTableViewCell.swift
//  SampleSwift
//
//  Created by Nazariy Vlizlo on 10/23/15.
//  Copyright © 2015 ABTO Software. All rights reserved.
//

import UIKit

class ImTableViewCell: UITableViewCell {

    @IBOutlet weak var title: UILabel!
    @IBOutlet weak var removeButton: UIButton!
    
    override func awakeFromNib() {
        super.awakeFromNib()
        // Initialization code
    }

    override func setSelected(selected: Bool, animated: Bool) {
        super.setSelected(selected, animated: animated)

        // Configure the view for the selected state
    }

}
