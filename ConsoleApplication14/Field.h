#pragma once
#include "Cell.h"

class Field
{
public:
	Field(): width(0), height(0){}
	Field(int width, int height) {
		this->width = width;
		this->height = height;
	}
	~Field();

	void printField() {
		printf("Field created with width : %d and height %d\n", width, height);
	}

	void destroyField(Field field) {
		printf("Field is destroyed\n");
	}

private:
	int width;
	int height;
	Cell cells;
};
