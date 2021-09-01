Pod::Spec.new do |s|
  s.name             = 'InLocoMedia-iOS-SDK'
  s.version          = '5.8.2'
  s.summary          = 'In Loco Media iOS SDK'
  s.description      = <<-DESC
                   Monetize your mobile apps with In Loco Media, taking advantage of our location intelligence to impact your users with contextualized Ads.
                   DESC
  s.homepage         = 'https://www.incognia.com/'
  s.license          = 'Copyright'
  s.author           = { "In Loco Tecnologia da Informacao S.A." => "hi@inlocomedia.com" }
  s.source           = { :git => "https://github.com/In-Loco-Media/inlocomedia-ios-sdk.git", :tag => "5.8.2" }
  s.documentation_url = "https://developer.incognia.com/docs/br/v5/"
  s.ios.deployment_target = '9.0'
  s.xcconfig = { 'OTHER_LDFLAGS' => '-lObjC' }
  s.license = 'LICENSE' 
  s.frameworks = 'Foundation'
  s.vendored_frameworks = 'InLocoSDK/InLocoSDKAds.framework'
  s.requires_arc = true
  s.dependency 'InLoco-iOS-SDK', '5.8.2'
end

