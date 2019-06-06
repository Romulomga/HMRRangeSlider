Pod::Spec.new do |s|
  s.name             = 'HMRRangeSlider'
  s.version          = '1.0.3'
  s.summary          = 'A slider that allows you to pick a range.'

  s.description      = 'A clone of [TTRangeSlider](https://github.com/TomThorpe/TTRangeSlider). Distributed by [Tom Thorpe](https://github.com/TomThorpe) in Github containing some improvements as individual steps for each handle and extra infos in touches delegates'

  s.homepage         = 'https://github.com/romulomga/HMRRangeSlider'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'romulomga' => 'rm.abrahao@gmail.com' }
  s.source           = { :git => 'https://github.com/romulomga/HMRRangeSlider.git', :tag => s.version.to_s }

  s.ios.deployment_target = '10.0'

  s.source_files = 'HMRRangeSlider/Classes/**/*'

end
