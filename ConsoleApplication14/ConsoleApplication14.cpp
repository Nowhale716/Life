#include <iostream>


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
