#include <iostream>


struct Cell {
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

struct Food {

};


void createField(int width, int height) {
    printf("Field created with width : %d and height %d", &width, &height);
}


void destroyField(Field field) {
    printf("Field is destroyed");
}


int main()
{
    createField(20,20);
    Field pole;
    pole.height = 100;
    pole.width = 100;
    destroyField(pole);
}
