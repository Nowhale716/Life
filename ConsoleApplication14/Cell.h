#include <iostream>
#pragma once
class Cell {
public:
    Cell() : x(0), y(0), state(0) {}
    Cell(int x, int y, int state) : x(x), y(y), state(state) {}

    void display() const {
        std::cout << "Cell at (" << x << ", " << y << ") has state: " << state << std::endl;
    }

    void setState(int newState) { state = newState; }
    int getState() const { return state; }

    int* getStatePtr() { return &state; }  // ������� �������� ����� ���������
    int& getStateRef() { return state; }  // ������� �������� ����� ������

    friend std::ostream& operator<<(std::ostream& os, const Cell& cell) {  // ������������� �������
        os << "Cell(" << cell.x << ", " << cell.y << ", " << cell.state << ")";
        return os;
    }

    Cell& operator=(const Cell& other) {  // ���������� ��������� ������������
        if (this != &other) {
            x = other.x;
            y = other.y;
            state = other.state;
        }
        return *this;
    }


private:
    int x;
    int y;
    int state;
};

