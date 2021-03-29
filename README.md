
[![Swift Version][swift-image]][swift-url]
[![Build Status][travis-image]][travis-url]
[![Platform](https://img.shields.io/cocoapods/p/LFAlertController.svg?style=flat)](http://cocoapods.org/pods/LFAlertController)

# ShopLive
<br />
<p align="center">
  <a href="https://www.shoplive.cloud/en">
    <img src="https://avatars.githubusercontent.com/u/74698543?s=200&v=4" alt="Logo" width="80" height="80">
  </a>
</p>

## Features

- [x] PIP

## Requirements

- iOS 13.0+

## Installation

#### CocoaPods
You can use [CocoaPods](http://cocoapods.org/) to install `ShopLiveSDK` by adding it to your `Podfile`:

```ruby
platform :ios, '13.0'
use_frameworks!
pod 'ShopLiveSDK'
```

To get the full benefits import `ShopLiveSDK` wherever you import UIKit

``` swift
import UIKit
import ShopLiveSDK
```

## Usage example

```swift
import ShopLiveSDK

ShopLive.configure(with: {ACCESS_KEY})
ShopLive.play(with: {CAMPAIGN_KEY})
```
