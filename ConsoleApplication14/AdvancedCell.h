#pragma once
#include "Cell.h"
#include "Drawable.h"

class AdvancedCell : Cell {
public:
    AdvancedCell() : Cell(), energy(0) {}
    AdvancedCell(int x, int y, int state, int energy) : Cell(x, y, state), energy(energy) {}

    void display() const override {
        Cell::display();
        std::cout << "Energy: " << energy << std::endl;
    }

    void setEnergy(int newEnergy) { energy = newEnergy; }
    int getEnergy() const { return energy; }

    AdvancedCell& operator=(const Cell& other) {
        if (this != &other) {
            Cell::operator=(other);
            energy = 0; // Default energy for assignment from base class
        }
        return *this;
    }

protected:
    int energy;
};