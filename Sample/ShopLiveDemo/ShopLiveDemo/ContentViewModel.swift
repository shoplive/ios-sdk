//
//  ContentViewModel.swift
//  ShopLiveDemo
//
//  Created by purpleworks on 2021/03/16.
//

import Foundation
import Combine
import ShopLiveSDK

class ContentViewModel: ObservableObject {
    @Published var accessKey: String
    @Published var campaignKey: String
    @Published var authToken: String
    @Published var userId: String
    @Published var userName: String
    @Published var gender: ShopLiveUser.Gender
    @Published var age: String
    
    @Published var navigationUrl: URL? = nil
        
    private var cancellableSet = Set<AnyCancellable>()
    
    init() {
        accessKey = UserDefaults.standard.apiKey ?? ""
        campaignKey = UserDefaults.standard.campaignKey ?? ""
        authToken = UserDefaults.standard.authToken ?? ""
        userId = UserDefaults.standard.userId ?? ""
        userName = UserDefaults.standard.userName ?? ""
        gender = UserDefaults.standard.userGender
        age = UserDefaults.standard.userAge > 0 ? String(UserDefaults.standard.userAge) : ""
        
        $accessKey.dropFirst().sink { (apiKey) in
            UserDefaults.standard.apiKey = apiKey
        }.store(in: &cancellableSet)
        
        $campaignKey.dropFirst().sink { (campaignKey) in
            UserDefaults.standard.campaignKey = campaignKey
        }.store(in: &cancellableSet)
        
        $authToken.dropFirst().sink { (authToken) in
            UserDefaults.standard.authToken = authToken
        }.store(in: &cancellableSet)
        
        $userId.dropFirst().sink { (userId) in
            UserDefaults.standard.userId = userId
        }.store(in: &cancellableSet)
        
        $userName.dropFirst().sink { (userName) in
            UserDefaults.standard.userName = userName
        }.store(in: &cancellableSet)
        
        $gender.dropFirst().sink { (gender) in
            UserDefaults.standard.userGender = gender
        }.store(in: &cancellableSet)
        
        $age.dropFirst().sink { (age) in
            UserDefaults.standard.userAge = Int(age) ?? -1
        }.store(in: &cancellableSet)
        
        ShopLive.delegate = self
    }
}

extension ContentViewModel: ShopLiveSDKDelegate {
    func handleCommand(_ command: String, with payload: Any?) {
        
    }
    
    func handleDownloadCoupon(with couponId: String, completion: () -> Void) {
        debugPrint("handleDownloadCoupon - couponId: couponId")
        completion()
    }
    
    func handleNavigation(with url: URL) {
        ShopLive.startPictureInPicture()
        navigationUrl = url
    }
}
