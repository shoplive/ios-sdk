//
//  ViewController.swift
//  ShopLiveSwiftSample
//
//  Created by purpleworks on 2021/03/19.
//

import UIKit
import ShopLiveSDK

class ViewController: UIViewController {

    override func viewDidLoad() {
        super.viewDidLoad()
        // Do any additional setup after loading the view.
    }

    @IBAction func didTouchPlayButton(_ sender: Any) {
        ShopLive.play(with: "CAMPAIGN_KEY")
    }
    
    @IBAction func didTouchSignInButton(_ sender: Any) {
        NSLog("start signin")
        DispatchQueue.main.async {
            let userId = "customerId"
            let userName = "customer"
            let userAge = 30;
            let userGender = ShopLiveUser.Gender.male
            
            NSLog("complete signin")
            NSLog("user id: %@", userId)
            NSLog("user name: %@", userName)
            NSLog("user age: %ld", userAge)
            NSLog("user gender: %ld", userGender.rawValue)
            
            let user = ShopLiveUser(id: userId, name: userName, gender: userGender, age: userAge)
            ShopLive.user = user
            ShopLive.play(with: "CAMPAIGN_KEY")
        }
    }
    
    @IBAction func didTouchCustomSizePipPlayButton(_ sender: Any) {
        ShopLive.pipScale = 0.2
        ShopLive.play(with: "CAMPAIGN_KEY")
    }
    
    @IBAction func didTouchCustomPositionPipPlayButton(_ sender: Any) {
        ShopLive.pipPosition = .topLeft
        ShopLive.play(with: "CAMPAIGN_KEY")
    }
}

