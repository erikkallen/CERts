AC_INIT(CERts, version-0.1)

AM_INIT_AUTOMAKE([1.11 no-define foreign subdir-objects])

#AC_CONFIG_MACRO_DIR([m4])

AC_PROG_CXX

AC_PROG_CC

AC_LANG(C++)

#AM_PATH_SDL2

AC_CHECK_HEADERS(iostream)

AC_CONFIG_HEADERS([config.h])

PKG_CHECK_MODULES([SDL2], [sdl2 >= 2])
PKG_CHECK_MODULES([SDL2IMAGE], [SDL2_image >= 2])

# Check for SDL_image library
AC_CHECK_LIB(SDL2_image, IMG_LoadPNG_RW, , AC_MSG_ERROR([
*** Unable to find SDL_image libary with PNG support
(http://www.libsdl.org/projects/SDL_image/)
]))

AC_CONFIG_FILES([Makefile])


AC_OUTPUT
