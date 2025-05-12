//
// Created by wikinto on 5/12/25.
//
#pragma once
#include <SDL3/SDL_pixels.h>

namespace RoseNG {
    class color {
        SDL_Color _color;
        public:
        unsigned char r,g,b;
        color(unsigned char r, unsigned char g, unsigned char b) : r(r), g(g), b(b) {};

        SDL_Color& setColor() const;
    };
}
