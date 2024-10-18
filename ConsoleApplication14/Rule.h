#pragma once
class Rule
{
public:
	Rule();
	~Rule();

private:
	int birth = 3;		// Рождение клетки, если у нее 3 соседа
	int survive_1 = 2;  // Выживание клетки, если у нее 2 соседа
	int survive_2 = 3;  // Выживание клетки, если у нее 3 соседа
};

Rule::Rule()
{
}

Rule::~Rule()
{
}

