	#include "pch.h"
#include "player.h"

player::player()
{
	tx.loadFromFile("textures/player/player_animation.png");
	m_x = 0;
	m_y = 0;
	m_speed = 0.0;
	m_direction = 0;
	framecount = 0;
}

sf::Texture player::get_next_frame()
{
	sf::Texture frame;
	if (m_direction == 0) {
		if (framecount - 3 >= 0) {
			framecount = 0;
		}
		else { framecount++; }
	}

	sf::IntRect frame_pos(framecount * 32, 0, 32, 32);
	frame.loadFromImage(tx, frame_pos);
	return frame;
}

sf::Vector2f player::get_position() {
	return sf::Vector2f(m_x, m_y);
}
