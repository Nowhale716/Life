#pragma once
#include "Field.h"
#include "Rule.h"
class Game
{
public:
	Game();
	~Game();

private:
	Field* current_grid;   // Текущее состояние игрового поля
	Field* next_grid;      // Следующее состояние игрового поля
	Rule rules;          // Правила игры
	int max_generations;  // Максимальное количество поколений
};
