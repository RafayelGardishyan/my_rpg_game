#include "pch.h"
#include "camera.h"


camera::camera()
{
	m_x = 0;
	m_y = 0;
}


camera::~camera()
{
}

void camera::move(sf::Vector2f delta)
{
	m_x += delta.x;
	m_y += delta.y;
}

sf::Vector2f camera::get_pos()
{
	return sf::Vector2f(m_x, m_y);
}
