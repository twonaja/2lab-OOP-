#include "Circle.h"

Circle::Circle(int midle, long rad, COLOR color)
{
	this->m_middle = midle;
	this->m_rad = rad;
	this->m_color = color;
}

Circle::Circle(Shape tmp)
{
	this->m_rad = 0;
	this->m_middle = 0;
	this->m_color = tmp.getColor();
}

Circle::~Circle()
{
	std::cout << "Delete circle :(...\n";
}

void Circle::Identety()
{
	std::cout << "A Circle :)\n";
}