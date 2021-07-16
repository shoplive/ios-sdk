Pod::Spec.new do |spec|
  spec.name         = "ShopLive"
  spec.version      = "0.8.1"
  spec.summary      = "ShopLive SDK for iOS"

  spec.homepage     = "http://shoplive.cloud"
  spec.license = { :type => 'Copyright', :text => <<-LICENSE
                 Copyright 2021
                 Permission is granted to...
                 LICENSE
              }

  spec.author             = { "Shoplive" => "shoplive-eng@shoplive.cloud" }
  spec.platform     = :ios

  spec.subspec 'iOS13' do |ss|
    ss.ios.deployment_target = '13.0'
    ss.vendored_frameworks = "Frameworks/iOS13/ShopLiveSDK.xcframework"
  end
  
  spec.subspec 'iOS11_12' do |ss|
    ss.ios.deployment_target = '11.0'
    ss.vendored_frameworks = "Frameworks/iOS11_12/ShopLiveSDK.xcframework"
    ss.dependency 'RxCocoa'
  end

  spec.swift_version = "5"

end
