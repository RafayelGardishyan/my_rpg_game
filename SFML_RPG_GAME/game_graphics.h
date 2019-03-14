#pragma once
#include <SFML/Graphics.hpp>

class game_graphics
{
public:
	game_graphics();
	virtual ~game_graphics();

	void run();

private:
	sf::RenderWindow m_window;
	long m_n_frames;
};

