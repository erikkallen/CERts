#ifndef IMG_LOADER_H
#define IMG_LOADER_H
#include <SDL.h>
#include <SDL_image.h>
#include <iostream>

SDL_Texture* loadTexture(const std::string &file, SDL_Renderer *ren);
#endif