#pragma once
#include <SFML/Graphics.hpp>
class camera
{
public:
	camera();
	~camera();
	void move(sf::Vector2f delta);
	sf::Vector2f get_pos();

private:
	int m_x;
	int m_y;
	bool blocked = false;
};

