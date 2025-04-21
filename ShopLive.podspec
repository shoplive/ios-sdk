Pod::Spec.new do |spec|
  spec.name         = "ShopLive"
<<<<<<< HEAD
  spec.version      = "0.0.1"
=======
  spec.version      = "1.6.9"
>>>>>>> cbc54dee99a98d7937b58885f99b6f3e35cb027f
  spec.summary      = "ShopLive SDK for iOS"

  spec.homepage     = "http://shoplive.cloud"
  spec.source   = { :git => 'https://github.com/shoplive/ios-sdk.git', :tag => spec.version }
  spec.license = { :type => 'Copyright', :text => <<-LICENSE
                 Copyright 2021
                 Permission is granted to...
                 LICENSE
              }

  spec.author             = { "Shoplive" => "shoplive-eng@shoplive.cloud" }
  spec.platform     = :ios
  spec.ios.deployment_target = '15.0'
  spec.swift_version = "5"
  spec.ios.frameworks = 'VideoToolbox'
  spec.vendored_frameworks = [
  'Frameworks/ShopLiveCorePlayerSDK.xcframework',
  'Frameworks/ShopLiveHLSPlayerSDK.xcframework',
  'Frameworks/ShopLiveWebRTCHelperSDK.xcframework',
  'Frameworks/ShopLiveWebRTCPlayerSDK.xcframework',
  'Frameworks/WebRTC.xcframework'
]
end
