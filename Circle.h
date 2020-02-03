#pragma once
#include "Shape.h"

class  Circle: public Shape 
{
	int m_middle;
	long m_rad;
public:
	Circle(int midle = 0, long rad = 0, COLOR color = BLUE);

};
