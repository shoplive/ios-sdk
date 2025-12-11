# IOS SDK

> `Shoplive iOS SDK` is a mobile SDK that allows users to quickly and easily provide livestreams to customers using the app. `Shoplive PIP(Picture-in-Picture)` and `native keyboard UI` enable seamless mobile experience on smartphones.

<br>

<image src="doc/_images/guide.gif" width="200" height="410" style="margin-left: auto; margin-right: auto; display: block;"></image>


## Requirements
These are the minimum requirements to use the Shoplive SDK for iOS. If you do not meet these requirements, you cannot use the Shoplive SDK for iOS.

- Xcode 14 and above
- iOS 11 and above
- iOS Deployment Target 11.0 and above
- Swift 5.0 and above

## Before getting started
To use the Shoplive SDK for iOS, please request for an admin account and password to a Shoplive representative.
- \[[Make a request](mailto:ask@Shoplive.cloud)]
- \[[Admin Guide - Creating Admin Account](https://en.shoplive.guide/docs/admin-account)]

Add campaigns in Shoplive admin and write down Campaign Key.
- \[[Admin Guide - Creating Campaign](https://en.shoplive.guide/docs/create-campaign)]

## Getting Started
### 1. Installation
Choose one of the following methods to install the Shoplive SDK for iOS.

> ❗️Do not duplicate installation.  
Shoplive SDK for iOS installation must be done using either ‘CocoaPods’ or ‘Swift Package Manager.'

- CocoaPods

Add the following line to the Podfile.

```Ruby
source 'https://github.com/CocoaPods/Specs.git'

# Set it as the same minimum supported version of the project.  
# Shoplive SDK for iOS supports iOS 11.0 and above. You cannot set it below iOS 11.0.
platform: ios, '11.0'
use_frameworks!

# Set Project Target for Shoplive SDK for iOS installation.
target 'PlayShopLive' do
#livePlayerSDK
pod 'ShopLive', '1.8.2'
pod 'ShopliveSDKCommon' , '1.8.2'
end
```
- Swift Package Manager

Once you have your Swift package set up, adding Shoplive SDK for iOS as a dependency is as easy as adding it to the dependencies value of your Package.swift.

```Ruby
dependencies: [
//player
.package(url: "https://github.com/shoplive/ios-sdk.git", .upToNextMajor(from: "1.8.2"))
.package(url: "https://github.com/shoplive/common-ios", .upToNextMajor(from: "1.8.2"))
]
```

### 2. How to run `Shoplive SDK for iOS` Player
- Initialize the Shoplive Android SDK using the prepared Access Key.

```Swift
// MainViewController.swift
class MainViewController: UIViewController {
...
    override func viewDidLoad() {
        super.viewDidLoad()
        // Initialize the Shoplive iOS SDK using the prepared Access Key.
        ShopLiveCommon.setAccessKey(accessKey : "{AccessKey}")

        // Set User
        ShopLiveCommon.setUser(user : "{ShopliveCommonUser}")

        // Play the video using the campaign key.s
        let playData = ShopLivePlayerData(campaignkey : "{CampaignKey}")
        ShopLive.play(data: playData )

        // Starts in-app PIP.
        let previewData = ShopLivePreviewData(campaignKey : "{CampaignKey}")
        ShopLive.preview(data: previewData, completion: nil)
    }
...
}
```
