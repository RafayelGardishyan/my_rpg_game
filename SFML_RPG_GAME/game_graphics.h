#pragma once

#include "camera.h"
#include "game_logics.h"
#include "texture_manager.h"
#include <SFML/Graphics.hpp>

class game_graphics
{
public:
	game_graphics();
	virtual ~game_graphics();
	void run();

private:
	sf::Time deltatime;
	void draw();
	void update();
	sf::Clock clock;
	sf::RenderWindow m_window;
	long m_n_frames;
	game_logics m_game;
	camera m_camera;

	void process_keyboard_events(sf::Event evnt);
	void process_mouse_events(sf::Event evnt);
};

