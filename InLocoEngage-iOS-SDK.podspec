Pod::Spec.new do |s|
  s.name             = 'InLocoEngage-iOS-SDK'
  s.version          = '4.2.1'
  s.summary          = 'Engage your users on your mobile apps with In Loco Engage'
  s.description      = <<-DESC
                   Beaconless location intelligence for apps: Unlock the power of micro-location to understand and engage your mobile app users in the real world using In Loco Engage's SDK.
                   DESC
  s.homepage         = 'http://www.inlocoengage.com/'
  s.license          = 'Copyright'
  s.author           = { "Ubee Desenvolvimento de Software S/A." => "hi@inlocomedia.com" }
  s.source           = { :git => "https://github.com/In-Loco-Media/inlocomedia-ios-sdk.git", :tag => "4.2.1" }
  s.documentation_url = "https://docs.inlocoengage.com"
  s.ios.deployment_target = '8.0'
  s.xcconfig = { 'OTHER_LDFLAGS' => '-lObjC' }
  s.license = 'LICENSE' 
  s.frameworks = 'Foundation'
  
  s.subspec 'Engage' do |eng|
    eng.vendored_frameworks = 'InLocoMediaSDK/InLocoMediaSDKEngage.framework'
    eng.dependency 'InLocoMedia-iOS-SDK/Location', '4.2.1'
  end
   s.requires_arc = true
end


