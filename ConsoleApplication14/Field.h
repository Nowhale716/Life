#pragma once
#include "Cell.h"

class Field
{
public:
	Field();
	~Field();

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