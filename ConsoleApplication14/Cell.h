#pragma once
#include <iostream>
#include "Drawable.h"

class Cell : public Drawable {
public:
    Cell() : x(0), y(0), state(0) {}
    Cell(int x, int y, int state) : x(x), y(y), state(state) {}

    virtual void display() const {
        std::cout << "Клетка на (" << x << ", " << y << ") с состоянием: " << state << std::endl;
    }

    void setState(int newState) { state = newState; }
    int getState() const { return state; }

    void draw() const override {
        display();
    }

protected:
    int x;
    int y;
    int state;
};