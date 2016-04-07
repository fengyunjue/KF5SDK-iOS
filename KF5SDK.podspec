#
# Be sure to run `pod lib lint MAPlayer.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see http://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
s.name             = "KF5SDK"
s.version          = "0.0.1"
s.summary          = "逸创云客服SDK嵌入到您原生IOS APP中，集成了工单反馈、反馈列表、文档知识库和即时交谈IM。"

s.description      = <<-DESC
"逸创云客服官方SDK，帮助开发者快速完成开发，提供给开发者创建工单、查看工单列表、回复工单、查看和搜索知识库文档、消息通知推送、即时IM等功能。目前支持iOS7.0及以上系统。"
DESC

s.homepage         = "https://github.com/fengyunjue/KF5SDK"
s.license          = 'MIT'
s.author           = { "ma772528138" => "ma772528138@qq.com" }
s.source           = { :git => "KF5SDK", :tag => s.version.to_s }
s.social_media_url = "http://www.kf5.com"

s.platform     = :ios, '7.0'
s.requires_arc = true

s.source_files = 'MAPlayer/*.{h,m}'
s.public_header_files = 'MAPlayer/*.h'
s.frameworks = 'Accelerate', 'JavaScriptCore', 'CoreTelephony','SystemConfiguration', 'AudioToolbox', 'MobileCoreServices','AssetsLibrary','AVFoundation','ImageIO','AudioToolbox'
s.libraries = 'sqlite3',
s.vendored_frameworks = 'KF5SDK/KF5SDK.framework'
s.vendored_libraries = 'KF5SDK/libopencore-amrnb.a'
s.preserve_path = 'KF5SDK/libopencore-amrnb.a'
s.resource = 'KF5SDK/KF5SDK.bundle'
end
