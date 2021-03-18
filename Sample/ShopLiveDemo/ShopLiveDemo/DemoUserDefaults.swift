//
//  DemoUserDefaults.swift
//  ShopLiveDemo
//
//  Created by purpleworks on 2021/03/16.
//

import Foundation
import ShopLiveSDK

struct ShopLiveDemoUsetDefaultKey {
    static let accessKey: String = "cloud.shoplive.sdk.demo.accessKey"
    static let campaignKey: String = "cloud.shoplive.sdk.demo.campaignkey"
    static let authToken: String = "cloud.shoplive.sdk.demo.authtoken"
    static let userId: String = "cloud.shoplive.sdk.demo.user.id"
    static let userName: String = "cloud.shoplive.sdk.demo.user.name"
    static let userGender: String = "cloud.shoplive.sdk.demo.user.gender"
    static let userAge: String = "cloud.shoplive.sdk.demo.user.age"
}

extension UserDefaults {
    @objc dynamic var apiKey: String? {
        get {
            return string(forKey: ShopLiveDemoUsetDefaultKey.accessKey)
        }
        set {
            set(newValue, forKey: ShopLiveDemoUsetDefaultKey.accessKey)
        }
    }
    
    @objc dynamic var campaignKey: String? {
        get {
            return string(forKey: ShopLiveDemoUsetDefaultKey.campaignKey)
        }
        set {
            set(newValue, forKey: ShopLiveDemoUsetDefaultKey.campaignKey)
        }
    }
    
    @objc dynamic var authToken: String? {
        get {
            return string(forKey: ShopLiveDemoUsetDefaultKey.authToken)
        }
        set {
            set(newValue, forKey: ShopLiveDemoUsetDefaultKey.authToken)
        }
    }
    
    @objc dynamic var userId: String? {
        get {
            return string(forKey: ShopLiveDemoUsetDefaultKey.userId)
        }
        set {
            set(newValue, forKey: ShopLiveDemoUsetDefaultKey.userId)
        }
    }
    
    @objc dynamic var userName: String? {
        get {
            return string(forKey: ShopLiveDemoUsetDefaultKey.userName)
        }
        set {
            set(newValue, forKey: ShopLiveDemoUsetDefaultKey.userName)
        }
    }
    
    @objc dynamic var userGender: ShopLiveUser.Gender {
        get {
            let rawValue = integer(forKey: ShopLiveDemoUsetDefaultKey.userGender)
            return ShopLiveUser.Gender(rawValue: rawValue) ?? .unknown
        }
        set {
            set(newValue.rawValue, forKey: ShopLiveDemoUsetDefaultKey.userGender)
        }
    }
    
    @objc dynamic var userAge: Int {
        get {
            return integer(forKey: ShopLiveDemoUsetDefaultKey.userAge)
        }
        set {
            set(newValue, forKey: ShopLiveDemoUsetDefaultKey.userAge)
        }
    }
}
