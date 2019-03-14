#include "pch.h"
#include "game_graphics.h"


game_graphics::game_graphics()
	: m_window{sf::VideoMode(512, 512), "RPG Game", sf::Style::Default}
{}

void game_graphics::run()
{
	while (m_window.isOpen())
	{
		sf::Event evnt;
		while (m_window.pollEvent(evnt))
		{
			switch (evnt.type)
			{
			case evnt.Closed:
				m_window.close();
				break;
			default:
				break;
			}
		}

		++m_n_frames;
	}
}


game_graphics::~game_graphics()
{
}
