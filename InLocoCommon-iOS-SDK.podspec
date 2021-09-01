Pod::Spec.new do |s|
  s.name             = 'InLocoCommon-iOS-SDK'
  s.version          = '5.8.2'
  s.summary          = 'In Loco Common iOS SDK' 
  s.description      = <<-DESC
                   Analyze, understand, and drive results for your business with real-world data on the flow of visits to establishments and behavior in the physical world.
                   DESC
  s.homepage         = 'https://www.inloco.com.br/en/'
  s.license          = 'Copyright'
  s.author           = { "In Loco Tecnologia da Informacao S.A." => "hi@inlocomedia.com" }
  s.source           = { :git => "https://github.com/In-Loco-Media/inlocomedia-ios-sdk.git", :tag => "5.8.2" }
  s.documentation_url = "https://docs.inloco.ai/"
  s.ios.deployment_target = '9.0'
  s.xcconfig = { 'OTHER_LDFLAGS' => '-lObjC' }
  s.license = 'LICENSE' 
  s.frameworks = 'Foundation'
  s.vendored_frameworks = 'InLocoSDK/InLocoSDK.framework',
                          'InLocoSDK/InLocoSDKCore.framework'
  s.requires_arc = true
end
