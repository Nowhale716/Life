#pragma once
#include "Change.h"
class Changes
{
public:
	Changes();
	~Changes();

private:
	int count;
	Change* changes;
};

Changes::Changes()
{
}

Changes::~Changes()
{
}

