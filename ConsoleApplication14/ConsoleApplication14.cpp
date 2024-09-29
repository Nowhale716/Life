#include <iostream>


struct Cell {
    int x;          // Координата X клетки
    int y;          // Координата Y клетки
    int state;  // 1 - живая, 0 - мертвая
};

struct Field {
    int width;
    int height;
    Cell cells;  // Двумерный массив клеток
};

enum Rule {
    BIRTH = 3,    // Рождение клетки, если у нее 3 соседа
    SURVIVE_1 = 2, // Выживание клетки, если у нее 2 соседа
    SURVIVE_2 = 3  // Выживание клетки, если у нее 3 соседа
} ;

struct Neighbors {
    int top_left;
    int top;
    int top_right;
    int left;
    int right;
    int bottom_left;
    int bottom;
    int bottom_right;
    int alive_count;
};

struct Change {
    int x;
    int y;
};

struct Changes {
    int count;
    Change* changes;  // Массив изменений
} Changes;

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
    printf("Field created with width : %d and height %d", width, height);
}


void destroyField(Field field) {
    printf("Field is destroyed");
}

void createCell(struct Cell* cell, int x, int y, int state) {
    cell->x = x;
    cell->y = y;
    cell->state = 1;
}

void printCell(struct Cell* cell, int x, int y, int state) {
    printf("Cell created with coordinates x:%d y:%d", cell->x, cell->y);
}
void deadCell(struct Cell* cell) {
    printf("Cell was dead");
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
