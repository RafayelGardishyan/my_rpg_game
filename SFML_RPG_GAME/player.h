#pragma once
#include <SFML/Graphics.hpp>

class player
{
public:
	player();
	sf::Texture get_next_frame();
	sf::Vector2f get_position();
private:
	int framecount;
	double m_x;
	double m_y;
	sf::Image tx;
	double m_speed;
	int m_direction;
};

