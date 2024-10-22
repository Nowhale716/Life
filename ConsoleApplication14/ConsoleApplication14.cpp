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

    // Создание динамического массива объектов класса Person
    Cell* cells = new Cell[size]{
        {0, 10, 1},
        {10, 10, 0},
        {20, 21, 1}
    };

    // Доступ к элементам массива и вызов метода display
    for (int i = 0; i < size; ++i) {
        cells[i].display();
    }

    // Удаление динамического массива объектов
    delete[] cells;
}

void arrayOfDynamicObjects() {
    const int size = 3;

    // Создание массива указателей на объекты класса Person
    Cell** cells = new Cell * [size];

    // Создание динамических объектов и сохранение их в массиве
    cells[0] = new Cell(21, 43, 1);
    cells[1] = new Cell(53, 21,0);
    cells[2] = new Cell(43,10,1);

    // Доступ к элементам массива и вызов метода display
    for (int i = 0; i < size; ++i) {
        cells[i]->display();  // Использование оператора -> для доступа к методу
    }

    // Удаление динамических объектов
    for (int i = 0; i < size; ++i) {
        delete cells[i];
    }

    // Удаление массива указателей
    delete[] cells;
}

int main()
{
    std::cout << "Dynamic array of cells:" << std::endl;
    dynamicArrayOfCells();

    std::cout << "\nArray of dynamic objects:" << std::endl;
    arrayOfDynamicObjects();

}
