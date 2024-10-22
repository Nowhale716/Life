#include <iostream>
#pragma once

class Cell
{
public:
    Cell() : x(0), y(0),state(0) {}
    Cell(int x, int y, int state) : x(x), y(y), state(state) {}

    void display() const {
        std::cout << "Cell at (" << x << ", " << y << ") has state: " << state << std::endl;
    }
private:
    int x;          // Координата X клетки
    int y;          // Координата Y клетки
    int state;      // 1 - живая, 0 - мертвая
};

