#pragma once
#include "Cell.h"  // ¬ключаем базовый класс

class AdvancedCell : public Cell {
public:
    AdvancedCell() : Cell(), energy(0) {}
    AdvancedCell(int x, int y, int state, int energy) : Cell(x, y, state), energy(energy) {}

    void display() const override {
        Cell::display();
        std::cout << "Ёнерги€: " << energy << std::endl;
    }

    void setEnergy(int newEnergy) { energy = newEnergy; }
    int getEnergy() const { return energy; }

protected:
    int energy;
};