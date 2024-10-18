#include <iostream>
#pragma once

class Cell
{
public:
	Cell();
	~Cell();

    void printCell(class Cell* cell, int x, int y, int state) {
        printf("Cell created with coordinates x:%d y:%d \n", cell->x, cell->y);
    }
    void deadCell(class Cell* cell) {
        printf("Cell was dead\n");
    }

private:
    int x;          // Координата X клетки
    int y;          // Координата Y клетки
    int state;      // 1 - живая, 0 - мертвая

};

Cell::Cell()
{
}

Cell::~Cell()
{
}

