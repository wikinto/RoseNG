//
// Created by wikinto on 5/12/25.
//

#include "include/color.hpp"
namespace RoseNG {
    SDL_Color & color::setColor() const {
        SDL_Color tmp_color;
        tmp_color.r = this->r;
        tmp_color.g = this->g;
        tmp_color.b = this->b;
        return tmp_color;
    }
}