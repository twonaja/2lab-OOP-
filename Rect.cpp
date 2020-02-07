#include "Rect.h"

Rect::Rect(int top, int bot, int left, int right, COLOR color)
{
	this->m_top = top;
	this->m_bot = bot;
	this->m_left = left;
	this->m_right = right;
	this->m_color = color;
}

Rect::~Rect()
{
	std::cout << "Delete Rect :|...\n";
}

void Rect::Identety()
{
	std::cout << "REECT :|\n";
}