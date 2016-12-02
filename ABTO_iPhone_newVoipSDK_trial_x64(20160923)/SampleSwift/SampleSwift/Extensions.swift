//
//  Extensions.swift
//  SampleSwift
//
//  Created by Nazariy Vlizlo on 10/22/15.
//  Copyright © 2015 ABTO Software. All rights reserved.
//

import Foundation

extension UIAlertController {
    func addActions(actions: [UIAlertAction]) {
        for action in actions {
            self.addAction(action)
        }
    }
}