Pod::Spec.new do |spec|
  spec.name         = "ShopLive"
  spec.version      = "0.8.1"
  spec.summary      = "ShopLive SDK for iOS"

  spec.homepage     = "http://shoplive.cloud"
  spec.source   = { :git => 'https://github.com/shoplive/ios-sdk.git', :tag => spec.version }
  spec.license = { :type => 'Copyright', :text => <<-LICENSE
                 Copyright 2021
                 Permission is granted to...
                 LICENSE
              }

  spec.author             = { "Shoplive" => "shoplive-eng@shoplive.cloud" }
  spec.pod_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }
  spec.user_target_xcconfig= { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]'=> 'arm64' }
  spec.platform     = :ios
  spec.ios.deployment_target = '13.0'
  spec.swift_version = "5"
  spec.ios.frameworks = 'CallKit', 'SafariServices'

  spec.subspec 'Support_iOS_MIN_13' do |ss|
    ss.ios.deployment_target = '13.0'
    ss.vendored_frameworks = 'Frameworks/iOS_MIN_13/ShopLiveSDK_MinVer13.xcframework'
  end
  
  spec.subspec 'Support_iOS_MIN_11' do |ss|
    ss.ios.deployment_target = '11.0'
    ss.vendored_frameworks = 'Frameworks/iOS_MIN_11/ShopLiveSDK_MinVer11.xcframework'
    ss.dependency 'RxCocoa'
  end

end
