Pod::Spec.new do |s|
  s.name             = 'InLoco-iOS-SDK'
  s.version          = '5.4.1'
  s.summary          = 'In Loco iOS SDK' 
  s.description      = <<-DESC
                   Analyze, understand, and drive results for your business with real-world data on the flow of visits to establishments and behavior in the physical world.
                   DESC
  s.homepage         = 'https://www.inloco.com.br/en/'
  s.license          = 'Copyright'
  s.author           = { "In Loco Tecnologia da Informacao S.A." => "hi@inlocomedia.com" }
  s.source           = { :git => "https://github.com/In-Loco-Media/inlocomedia-ios-sdk.git", :tag => "5.4.1" }
  s.documentation_url = "https://docs.inloco.ai/"
  s.ios.deployment_target = '9.0'
  s.xcconfig = { 'OTHER_LDFLAGS' => '-lObjC' }
  s.license = 'LICENSE' 
  s.frameworks = 'Foundation'
  s.vendored_frameworks = 'InLocoSDK/InLocoSDKLocation.framework'
  s.requires_arc = true
  s.dependency 'InLocoCommon-iOS-SDK', '5.4.1'
end

