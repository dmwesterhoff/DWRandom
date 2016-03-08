Pod::Spec.new do |s|
  s.name             = "DWRandom"
  s.version          = "0.1.2"
  s.summary          = "An extension based iOS and OS X randomization library"

  s.description      = <<-DESC
    DWRandom is a lightweight framework written in Objective-C that makes
    working with randomization in many of Foundations core data structures a
    breeze(And some UIKit ones too!). The interface is extension based and aims
    to be dead simple to easily put randomization capabilities in your project
    in a very clean way. If you want a clean one liner solution for
    randomization look no further.
                       DESC

  s.homepage         = "https://github.com/dmwesterhoff/DWRandom"
  s.license          = 'MIT'
  s.author           = { "David Westerhoff" => "dmwesterhoff@gmail.com" }
  s.source           = { :git => "https://github.com/dmwesterhoff/DWRandom.git", :tag => s.version.to_s }
  # s.screenshots     = "www.example.com/screenshots_1", "www.example.com/screenshots_2"
  # s.social_media_url = 'https://twitter.com/<TWITTER_USERNAME>'

  s.platform     = :ios, '7.0'
  s.requires_arc = true

  s.source_files = 'DWRandom/**/*'
  # s.resource_bundles = {
  #   'DWRandom' => ['Pod/Assets/*.png']
  # }

  # s.public_header_files = 'Pod/Classes/**/*.h'
  # s.frameworks = 'UIKit', 'MapKit'
end
