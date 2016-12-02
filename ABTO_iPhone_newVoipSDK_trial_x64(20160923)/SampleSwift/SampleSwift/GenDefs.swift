//
//  GenDefs.swift
//  SampleSwift
//
//  Created by Nazariy Vlizlo on 10/19/15.
//  Copyright © 2015 ABTO Software. All rights reserved.
//

import Foundation

let IM_HISTORY_KEY = "IM_HISTORY"
let IM_FROM_KEY = "IM_FROM"
let IM_TO_KEY = "IM_TO"
let IM_BODY_KEY = "IM_BODY"
let IM_IS_READ_KEY = "IM_IS_READ"

enum PhoneEvents: Int {
    case RegSuccess,
    RegFailed,
    UnregSuccess,
    UnregFailed,
    RemoteAlerting
}

enum CallEvents: Int {
    case Connected,
    Disconnected,
    Alerting,
    Incoming,
    Transfering
}

let SETTINGS_KEY = "settings"

let CALL_ID_ARGUMENT = "callId"
let CONTACT_ARGUMENT = "contact"
let STATUS_ARGUMENT  = "status"
let MESSAGE_ARGUMENT =  "message"

let NOTIFICATION_NEW_IM = "NOTIFICATION_NEW_IM"

let NOTIFICATION_PHONE_EVENT = "NOTIFICATION_PHONE_EVENT"
let NOTIFICATION_CALL_EVENT = "NOTIFICATION_CALL_EVENT"

let BASE_CODEC_PRIORITY = 128