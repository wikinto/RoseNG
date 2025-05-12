//
// Created by wikinto on 5/12/25.
//

#pragma once
#include <cstdint>

namespace RoseNG {
    class vector2 {
        public:
        uint32_t x, y;
        vector2(uint32_t x, uint32_t y): x(x), y(y) {};
        uint32_t getX() const { return x; }
        uint32_t getY() const { return y; }
        void setX(uint32_t x) { this->x = x; }
        void setY(uint32_t y) { this->y = y; }

    };
}
