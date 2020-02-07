#include "Shape.h"

Shape::Shape(COLOR color)
{
	this->m_color = color;
}

Shape::~Shape()
{
	std::cout << "Delete shape :)...\n";
}

void Shape::Identety()
{
	std::cout << "Just a shape :(\n"; 
}
