code_lib = library('code-lib', files('project.c', 'messages.c', 'utility.c'),
    c_args : '-DBUILDING_PROJECT',
    include_directories: include_directories('.'))

code_dep = declare_dependency(
    version: meson.project_version(),
    link_with: code_lib,
    include_directories: include_directories('.'))
