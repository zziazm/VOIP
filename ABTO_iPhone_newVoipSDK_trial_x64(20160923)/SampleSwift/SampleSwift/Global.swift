//
//  Global.swift
//  SampleSwift
//
//  Created by Nazariy Vlizlo on 10/19/15.
//  Copyright © 2015 ABTO Software. All rights reserved.
//

import Foundation

func applicationDelegate() -> AppDelegate {
    return UIApplication.sharedApplication().delegate as! AppDelegate
}

func RGBA(r: Int, _ g: Int, _ b: Int, _ a: CGFloat) -> UIColor {
    return UIColor(red: CGFloat(r) / CGFloat(255), green: CGFloat(g) / CGFloat(255), blue: CGFloat(b) / CGFloat(255), alpha: a)
}

func RGB(r: Int, _ g: Int, _ b: Int) -> UIColor {
    return UIColor(red: CGFloat(r) / CGFloat(255), green: CGFloat(g) / CGFloat(255), blue: CGFloat(b) / CGFloat(255), alpha: 1.0)
}