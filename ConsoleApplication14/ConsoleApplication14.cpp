#include <iostream>
#include "Cell.h"
#include "Field.h"
#include "Game.h"
#include "Change.h"
#include "Changs.h"
#include "State.h"
#include "Rule.h"
#include "Neighbours.h"

void dynamicArrayOfCells() {
    try {
        const int size = 3;
        Cell* cells = new Cell[size]{
            {0, 10, 1},
            {10, 10, 0},
            {20, 21, 1}
        };

        for (int i = 0; i < size; ++i) {
            cells[i].display();
        }

        delete[] cells;
    }
    catch (const std::exception& e) {
        std::cerr << "Error in dynamicArrayOfCells: " << e.what() << std::endl;
    }
}

void arrayOfDynamicObjects() {
    try {
        const int size = 3;
        Cell** cells = new Cell * [size];

        cells[0] = new Cell(21, 43, 1);
        cells[1] = new Cell(53, 21, 0);
        cells[2] = new Cell(43, 10, 1);

        for (int i = 0; i < size; ++i) {
            cells[i]->display();
        }

        for (int i = 0; i < size; ++i) {
            delete cells[i];
        }

        delete[] cells;
    }
    catch (const std::exception& e) {
        std::cerr << "Error in arrayOfDynamicObjects: " << e.what() << std::endl;
    }
}

int main() {
    try {
        std::cout << "Dynamic array of cells:" << std::endl;
        dynamicArrayOfCells();

        std::cout << "\nArray of dynamic objects:" << std::endl;
        arrayOfDynamicObjects();

        // Демонстрация возврата через указатель и ссылку
        Cell exampleCell(5, 5, 1);
        int* statePtr = exampleCell.getStatePtr();
        int& stateRef = exampleCell.getStateRef();

        std::cout << "State via pointer: " << *statePtr << std::endl;
        std::cout << "State via reference: " << stateRef << std::endl;

        // Демонстрация дружественной функции
        std::cout << "Using friend function: " << exampleCell << std::endl;


    }
    catch (const std::exception& e) {
        std::cerr << "Unhandled exception in main: " << e.what() << std::endl;
    }

    return 0;
}
