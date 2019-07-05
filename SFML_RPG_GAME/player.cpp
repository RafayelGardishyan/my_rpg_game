	#include "pch.h"
#include "player.h"
#include <iostream>

player::player()
{
	m_x = 0;
	m_y = 0;
	m_speed = 0.0;
	m_direction = 0;
	framecount = 0;
}

sf::Vector2f player::get_position() {
	return sf::Vector2f(m_x, m_y);
}

int player::get_frame_c()
{
	return framecount;
}

void player::set_frame_c(int count)
{
	framecount = count;
}

void player::increase_frame_c()
{
	framecount++;
}

std::string player::get_filename()
{
	return "textures/player/player_animation.png";
}

int player::get_dir()
{
	return m_direction;
}
