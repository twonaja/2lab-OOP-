#pragma once
#include "Shape.h"

class Rect:public Shape
{
	int m_top, m_bot, m_left, m_right;
public:
	Rect(int top = 0, int bot = 0, int left = 0, int right = 0, COLOR color = GREEN);
	
};
