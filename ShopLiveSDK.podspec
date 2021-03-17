Pod::Spec.new do |s|
    s.name         = "ShopLiveSDK"
    s.version      = "1.0.5"
    s.summary      = "ShopLive"
    s.homepage     = "http://shoplive.com"
    s.license = { :type => 'Copyright', :text => <<-LICENSE
                   Copyright 2018
                   Permission is granted to...
                  LICENSE
                }
    s.author             = { "Namwoong Baek" => "namwoong.baek@purpleworks.co.kr" }
    s.source       = { :git => "git@git.purple.io:ShopLive/ShopLiveSDK-iOS.git", :tag => s.version.to_s }
    s.vendored_frameworks = "ShopLiveSDK.xcframework"
    s.platform = :ios
    s.swift_version = "5"
    s.ios.deployment_target  = '13.0'
end
