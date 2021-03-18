//
//  ShopLiveDemoApp.swift
//  ShopLiveDemo
//
//  Created by purpleworks on 2021/03/16.
//

import SwiftUI

@main
struct ShopLiveDemoApp: App {
    @StateObject var model = ShopLiveDemoAppModel()
    
    var body: some Scene {
        WindowGroup {
            ContentView()
        }
    }
}
