#include "pch.h"
#include "game_graphics.h"
#include <vector>


game_graphics::game_graphics()
	: m_window{sf::VideoMode(512, 512), "RPG Game", sf::Style::Default}
{}

void game_graphics::draw()
{
	std::vector<tile> tiles = m_game.get_tiles();

	for (unsigned int i = 0; i < tiles.size(); i++)
	{
		tile current = tiles.at(i);
		sf::RectangleShape rect;
		rect.setSize(sf::Vector2f(32, 32));
		rect.setFillColor(get_tile_color(current.get_type()));
		rect.setPosition(sf::Vector2f(current.get_pos().x * 32, current.get_pos().y * 32));

		m_window.draw(rect);
	}

	m_window.display();

}

void game_graphics::run()
{
	while (m_window.isOpen())
	{
		// Process events
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

		//Clear Background
		m_window.clear(sf::Color::Black);

		// Do drawing
		draw();

		++m_n_frames;
	}
}


game_graphics::~game_graphics()
{
}
