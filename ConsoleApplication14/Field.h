#include <iostream>
#include "Cell.h"
#pragma once
class Field {
public:
    Field() : width(0), height(0) {}
    Field(int width, int height) : width(width), height(height) {
        cells = new Cell * [height];
        for (int i = 0; i < height; ++i) {
            cells[i] = new Cell[width];
        }
    }

    Field(const Field& other) {  // Конструктор копии
        width = other.width;
        height = other.height;
        cells = new Cell * [height];
        for (int i = 0; i < height; ++i) {
            cells[i] = new Cell[width];
            for (int j = 0; j < width; ++j) {
                cells[i][j] = other.cells[i][j];
            }
        }
    }

    Field& operator=(const Field& other) {  // Перегрузка оператора присваивания
        if (this != &other) {
            for (int i = 0; i < height; ++i) {
                delete[] cells[i];
            }
            delete[] cells;

            width = other.width;
            height = other.height;
            cells = new Cell * [height];
            for (int i = 0; i < height; ++i) {
                cells[i] = new Cell[width];
                for (int j = 0; j < width; ++j) {
                    cells[i][j] = other.cells[i][j];
                }
            }
        }
        return *this;
    }

    ~Field() {
        for (int i = 0; i < height; ++i) {
            delete[] cells[i];
        }
        delete[] cells;
    }

    void printField() const {
        std::cout << "Размер поля: " << width << "x" << height << std::endl;
    }

private:
    int width;
    int height;
    Cell** cells;
};