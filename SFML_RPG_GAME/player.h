#pragma once
#include <SFML/Graphics.hpp>

class player
{
public:
	player();
	sf::Vector2f get_position();
	int get_frame_c();
	void set_frame_c(int count);
	void increase_frame_c();
	std::string get_filename();
	int get_dir();

private:
	int framecount;
	double m_x;
	double m_y;
	sf::Image tx;
	double m_speed;
	int m_direction;
};

