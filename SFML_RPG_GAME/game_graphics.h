#pragma once

#include "game_logics.h"
#include <SFML/Graphics.hpp>

class game_graphics
{
public:
	game_graphics();
	virtual ~game_graphics();

	void draw();
	void run();

private:
	sf::RenderWindow m_window;
	long m_n_frames;
	game_logics m_game;
};

