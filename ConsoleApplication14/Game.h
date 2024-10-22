#pragma once
#include "Field.h"
#include "Rule.h"
class Game
{
public:
	Game();
	~Game();

private:
	Field* current_grid;   // ������� ��������� �������� ����
	Field* next_grid;      // ��������� ��������� �������� ����
	Rule rules;          // ������� ����
	int max_generations;  // ������������ ���������� ���������
};
