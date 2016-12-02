//
//  SipNumberTextField.swift
//  SampleSwift
//
//  Created by Nazariy Vlizlo on 10/28/15.
//  Copyright © 2015 ABTO Software. All rights reserved.
//

import UIKit

class SipNumberTextField: UITextField {
    
    override func textRectForBounds(bounds: CGRect) -> CGRect {
        return CGRectInset(bounds, 15, 0)
    }
    
    override func editingRectForBounds(bounds: CGRect) -> CGRect {
        return CGRectInset(bounds, 15, 0)
    }
}
