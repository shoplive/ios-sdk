Pod::Spec.new do |spec|
  spec.name         = "ShopLive"
  spec.version      = "0.7.0"
  spec.summary      = "ShopLive SDK for iOS"

  spec.homepage     = "http://shoplive.cloud"
  spec.license = { :type => 'Copyright', :text => <<-LICENSE
                 Copyright 2021
                 Permission is granted to...
                 LICENSE
              }

  spec.author             = { "Shoplive" => "shoplive-eng@shoplive.cloud" }
  spec.platform     = :ios
  spec.ios.deployment_target = "11.0"
  
  spec.source       = { :git => "https://github.com/shoplive/ios-sdk.git", :tag => "#{spec.version}" }
  spec.vendored_frameworks = "ShopLiveSDK.xcframework"
  spec.swift_version = "5"
  spec.dependency 'RxCocoa'

end
