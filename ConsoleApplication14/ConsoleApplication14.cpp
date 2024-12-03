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

void arrayOfDynamicObjects() {
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

int main() {
    setlocale(LC_ALL, "rus");
    std::cout << "Динамический массив клеток:" << std::endl;
    dynamicArrayOfCells();

    std::cout << "\nМассив динамических объектов:" << std::endl;
    arrayOfDynamicObjects();

    // Демонстрация возврата через указатель и ссылку
    Cell exampleCell(5, 5, 1);
    int* statePtr = exampleCell.getStatePtr();
    int& stateRef = exampleCell.getStateRef();

    std::cout << "Передача значения через указатель: " << *statePtr << std::endl;
    std::cout << "Передача значений через ссылку: " << stateRef << std::endl;

    // Демонстрация дружественной функции
    std::cout << "Используя дружественную функцию: " << exampleCell << std::endl;

    return 0;
}
