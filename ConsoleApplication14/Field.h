#pragma once
#include "Cell.h"

class Field
{
public:
	Field();
	~Field();

	void createField(int width, int height) {
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

Field::Field()
{
}

Field::~Field()
{
}