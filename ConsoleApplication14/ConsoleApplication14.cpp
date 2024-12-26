#include <iostream>
#include <vector>
#include <locale>
#include <algorithm>
#include "Cell.h"          // Базовый класс
#include "AdvancedCell.h"  // Производный класс

void showCellInfo(const Cell& cell) {
    cell.display();
}

bool compareByState(const Cell* a, const Cell* b) {
    return a->getState() < b->getState();
}

bool findCellByState(const Cell* cell, int state) {
    return cell->getState() == state;
}

int main() {
    setlocale(LC_ALL,"ru");
    std::vector<Cell*> cells;

    cells.push_back(new Cell(1, 2, 3));
    cells.push_back(new AdvancedCell(3, 4, 1, 200));
    cells.push_back(new Cell(5, 6, 2));
    cells.push_back(new AdvancedCell(7, 8, 4, 150));

    std::cout << "До сортировки:" << std::endl;
    for (const auto& cell : cells) {
        showCellInfo(*cell);
    }

    std::sort(cells.begin(), cells.end(), compareByState);

    std::cout << "\nПосле сортировки:" << std::endl;
    for (const auto& cell : cells) {
        showCellInfo(*cell);
    }

    int searchState = 2;
    auto it = std::find_if(cells.begin(), cells.end(), [searchState](const Cell* cell) {
        return findCellByState(cell, searchState);
        });

    if (it != cells.end()) {
        std::cout << "\nНайденные клетки с состоянием " << searchState << ":" << std::endl;
        showCellInfo(**it);
    }
    else {
        std::cout << "\nКлетки с состоянием " << searchState << " не найдены." << std::endl;
    }

    for (auto& cell : cells) {
        delete cell;
    }

    return 0;
}