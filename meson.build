# meson.build
project('seekr', 'cpp',
  version : '0.1',
  default_options : ['warning_level=3', 'cpp_std=c++14'])

incdir = include_directories('include')

executable('seekr',
           'src/URL.cpp',
           'src/main.cpp',
           install : true,
           include_directories : incdir)

