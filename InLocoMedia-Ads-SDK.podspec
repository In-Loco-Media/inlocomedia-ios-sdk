Pod::Spec.new do |s|
 
  s.name         = "InLocoMedia-Ads-SDK"
  s.version      = "2.1.2"
  s.summary      = "Monetize your mobile apps with In Loco Media, the most profitable Ad Network in Latin America."

  s.description  = <<-DESC
                   In Loco Media's SDK is easy to install, taking less than 1 hour to setup and start monetizing with relevant ads to the user, thanks to its powerful targeting capabilities. In Loco Media owns the most accurate global market positioning technology.
                   DESC

  s.homepage     = "http://www.inlocomedia.com"
  s.license      = "Copyright"
  s.author       = { "Ubee Desenvolvimento de Software S/A." => "hi@inlocomedia.com" }
  s.documentation_url = "https://github.com/in-loco-media/inlocomedia-ios-sdk/wiki"

  s.platform     = :ios, "7.0"
  s.source       = { :git => "https://github.com/In-Loco-Media/inlocomedia-ios-sdk.git", :tag => "2.1.2" }
  s.vendored_frameworks = 'InLocoMediaSDK/InLocoMediaAPI.framework'
  s.xcconfig = { 'OTHER_LDFLAGS' => '-lObjC' }
  s.requires_arc = true
  
end
