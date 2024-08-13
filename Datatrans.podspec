Pod::Spec.new do |spec|
  spec.name                 = "Datatrans"
  spec.version              = "3.7.0"
  spec.summary              = "Datatrans iOS SDK - Accept payments on your iOS apps"
  spec.description          = <<-DESC
    Accept payments on your iOS apps: Our mobile SDKs support your entire payment and
    registration process and simplify the integration of any payment method in your mobile
    apps. Completely outsource your payment processes to us from inside your native apps.
    We also take care of redirecting your users to 3D Secure processes and enable smooth
    app-switches to other payment applications including Twint and PostFinance.
    DESC
  spec.homepage             = "https://github.com/datatrans/ios-sdk"
  spec.license              = "Datatrans"
  spec.author               = { "ieffects ag" => "support@ieffects.com" }

  spec.swift_version        = "5"
  spec.platform             = :ios, "11.0"

  spec.source               = { :git => "https://github.com/datatrans/ios-sdk.git", :tag => "#{spec.version}" }
  spec.vendored_frameworks  = "Datatrans.xcframework", "DTKlarna.xcframework", "KlarnaMobileSDK.xcframework", "PPRiskMagnes.xcframework"
end
