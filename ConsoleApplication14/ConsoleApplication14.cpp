﻿#include <iostream>


struct Field {
    int width;
    int height;
    Cell cells;  // Двумерный массив клеток
};

enum Rule {
    BIRTH = 3,    // Рождение клетки, если у нее 3 соседа
    SURVIVE_1 = 2, // Выживание клетки, если у нее 2 соседа
    SURVIVE_2 = 3  // Выживание клетки, если у нее 3 соседа
} ;ёё

struct State {
    int generation;
    Field* Field;
};

struct Game{
    Field* current_grid;   // Текущее состояние игрового поля
    Field* next_grid;      // Следующее состояние игрового поля
    Rule rules;          // Правила игры
    int max_generations;  // Максимальное количество поколений
};

void createField(int width, int height) {
    printf("Field created with width : %d and height %d\n", width, height);
}


void destroyField(Field field) {
    printf("Field is destroyed\n");
}


int main()
{
    struct Cell cell;
    createField(20,20);
    Field pole;
    pole.height = 100;
    pole.width = 100;
    createCell(&cell, 0, 0, 1);
    deadCell(&cell);
    destroyField(pole);
}
