#include <iostream>
#include "Cell.h"
#include "AdvancedCell.h"
#include "Field.h"
#include "Game.h"
#include "Change.h"
#include "Changs.h"
#include "State.h"
#include "Rule.h"
#include "Neighbours.h"

void showCellInfo(const Cell& cell) {
    cell.display();
}



int main() {

    Cell* cellPtr = new AdvancedCell(1, 2, 1, 100);
    showCellInfo(*cellPtr); // Виртуальная функция вызывается через базовый класс

    AdvancedCell advancedCell(3, 4, 1, 200);
    showCellInfo(advancedCell); // Виртуальная функция вызывается через производный класс

    delete cellPtr;

    return 0;
}
