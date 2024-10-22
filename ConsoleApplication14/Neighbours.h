#pragma once

class Neighbours
{
public:
	Neighbours();
	~Neighbours();

private:
    int top_left;
    int top;
    int top_right;
    int left;
    int right;
    int bottom_left;
    int bottom;
    int bottom_right;
    int alive_count;
};
