Pod::Spec.new do |s|
  s.name             = 'InLocoMedia-iOS-SDK'
  s.version          = '3.3.4'
  s.summary          = 'Monetize your mobile apps with In Loco Media, the most profitable Ad Network in Latin America.'
  s.description      = <<-DESC
                   In Loco Media's SDK is easy to install, taking less than 1 hour to setup and start monetizing with relevant ads to the user, thanks to its powerful targeting capabilities. In Loco Media owns the most accurate global market positioning technology.
                   DESC
  s.homepage         = 'https://www.inlocomedia.com/'
  s.license          = 'Copyright'
  s.author           = { "Ubee Desenvolvimento de Software S/A." => "hi@inlocomedia.com" }
  s.source           = { :git => "https://github.com/In-Loco-Media/inlocomedia-ios-sdk.git", :tag => "3.3.4" }
  s.documentation_url = "http://docs.inlocomedia.com/"
  s.ios.deployment_target = '8.0'
  s.xcconfig = { 'OTHER_LDFLAGS' => '-lObjC' }
  s.license = 'LICENSE' 
  s.frameworks = 'Foundation'
  
  s.subspec 'Ads' do |ads|
    ads.vendored_frameworks = 'InLocoMediaSDK/InLocoMediaSDKAds.framework'
    ads.dependency 'InLocoMedia-iOS-SDK/Core'
  end
  s.subspec 'Location' do |location|
    location.vendored_frameworks = 'InLocoMediaSDK/InLocoMediaSDKLocation.framework'
    location.dependency 'InLocoMedia-iOS-SDK/Core'
  end
  s.subspec 'Core' do |core|
    core.vendored_frameworks = 'InLocoMediaSDK/InLocoMediaSDKCore.framework'
  end
  s.requires_arc = true
end

