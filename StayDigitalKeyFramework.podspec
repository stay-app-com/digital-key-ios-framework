Pod::Spec.new do |s|
  s.name = "StayDigitalKeyFramework"
  s.version          = "1.1"
  s.summary          = "Stay digital key manager"
  s.homepage         = "https://stay-app.com"
  s.license      = {
     :type => 'Copyright',
     :text => <<-LICENSE
       Copyright (c) 2021 Stay App. All rights reserved.
       LICENSE
   }

  s.author           = { "Stay App" => "info@stay-app.com" }
  s.source = { :git => 'https://bitbucket.org/mobailapps/staydigitalkeyiosframework.git' }

  s.requires_arc = true

  s.ios.deployment_target = '11.0'
  s.ios.frameworks = 'Foundation', 'CoreTelephony', 'Security', 'CoreLocation', 'CoreBluetooth', 'CoreMotion', 'UIKit', 'SystemConfiguration', 'LocalAuthentication'

  s.module_name = 'StayDigitalKeyFramework'

  s.vendored_frameworks = 'StayDigitalKeyFramework.xcframework'
end

