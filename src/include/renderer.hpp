//
// Created by wikinto on 5/12/25.
//
#pragma once
#include <bits/stdint-uintn.h>
#include <SDL3/SDL.h>
#include <string>
#include "color.hpp"
#include "vector2.hpp"

namespace RoseNG {
    //Renderer odpowiada za uruchomienie okna i zarządzaniem co się na nim dzieje, póki co to niech rysuje, potem się zobaczy 12.05.2025
    class renderer {
        SDL_Window *win { nullptr };
        SDL_Renderer *sdl_renderer_ { nullptr };
    public:
        std::string window_name;
        uint16_t width, height;
        renderer(const std::string &window_name, const uint16_t width, const uint16_t height) : window_name(window_name), width(width), height(height) {
            SDL_Init(SDL_INIT_VIDEO);
            win = SDL_CreateWindow(window_name.c_str(), width, height, 0);
            sdl_renderer_ = SDL_CreateRenderer(win, nullptr);
        };
        ~renderer() {
            SDL_DestroyRenderer(sdl_renderer_);
            SDL_DestroyWindow(win);
            SDL_Quit();
        }
        void Clear(color bg = color(0,0,0));
        void DrawRect(vector2 position,vector2 scale, RoseNG::color color);
        void Present();

    };
}
