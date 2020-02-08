#pragma once

#include <iostream>
enum COLOR{RED, GREEN, BLUE};

class Shape
{
public:
	Shape(COLOR color = RED);
	
	virtual ~Shape();
	virtual void Identety();
	const COLOR getColor() { return m_color; }
	virtual void Inflate(int baf) = 0;
protected:
	COLOR m_color;
	
};

