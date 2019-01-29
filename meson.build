project('CERts', 'cpp')

subdir('src')
subdir('res')

sdl2 = dependency('SDL2')
sdl2_image = dependency('SDL2_image')

executable('CERts', 'src/main.cpp', certs_sources, dependencies: [sdl2, sdl2_image])
