#pragma once
#include "Field.h"
class State
{
public:
	State();
	~State();

private:
	int generation;
	Field* Field;

};

State::State()
{
}

State::~State()
{
}
