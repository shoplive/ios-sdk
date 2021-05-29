Pod::Spec.new do |s|
    s.name         = "ShopLiveSDK"
    s.version      = "0.6.7"
    s.summary      = "ShopLive"
    s.homepage     = "http://shoplive.cloud"
    s.license = { :type => 'Copyright', :text => <<-LICENSE
                   Copyright 2021
                   Permission is granted to...
                  LICENSE
                }
    s.author             = { "Shoplive" => "shoplive-eng@shoplive.cloud" }
    s.source       = { :git => "https://github.com/shoplive/ios-sdk.git", :tag => s.version.to_s }
    s.vendored_frameworks = "ShopLiveSDK.xcframework"
    s.platform = :ios
    s.swift_version = "5"
    s.ios.deployment_target  = '11.0'
    s.dependency 'RxSwift', '~> 4.5.0'
end
