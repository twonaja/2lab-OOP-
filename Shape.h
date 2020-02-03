#pragma once
enum COLOR{RED, GREEN, BLUE};

class Shape
{
public:
	Shape(COLOR color = RED);
	~Shape() = default;

protected:
	COLOR m_color;

};
