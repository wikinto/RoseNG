//
// Created by wikinto on 5/12/25.
//

#include "include/renderer.hpp"

namespace RoseNG {
    void renderer::Clear(color bg) {
        SDL_SetRenderDrawColor(sdl_renderer_, bg.r, bg.g, bg.b, 255);
        SDL_RenderClear(sdl_renderer_);
    }

    void renderer::DrawRect(vector2 position, vector2 scale, RoseNG::color color) {
        SDL_FRect rect = {position.x, position.y, scale.x, scale.y};
        SDL_SetRenderDrawColor(sdl_renderer_, color.r, color.g, color.b, 255);
        SDL_RenderFillRect(sdl_renderer_, &rect);
    }

    void renderer::Present() {
        SDL_RenderPresent(sdl_renderer_);
    }
}
