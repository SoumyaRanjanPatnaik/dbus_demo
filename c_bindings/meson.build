project('c_bindings', 'c',
  version : '0.1',
  default_options : ['warning_level=3'])

gio_dep = dependency('gio-unix-2.0')

executable('c_bindings_example',
           'example.c',
           'config_manager.c',
           dependencies: [gio_dep])
