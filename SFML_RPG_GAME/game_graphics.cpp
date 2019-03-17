#include "pch.h"
#include "game_graphics.h"
#include <vector>
#include <iostream>


game_graphics::game_graphics()
	: m_window{sf::VideoMode(512, 512), "RPG Game", sf::Style::Close}
{
	m_camera.move(sf::Vector2f(-32, -32));
}

void game_graphics::draw()
{
	std::vector<tile> tiles = m_game.get_tiles();

	for (unsigned int i = 0; i < tiles.size(); i++)
	{
		tile current = tiles.at(i);
		sf::RectangleShape rect;
		rect.setSize(sf::Vector2f(32, 32));
		rect.setFillColor(get_tile_color(current.get_type()));
		rect.setPosition(sf::Vector2f((current.get_pos().x * 32) - m_camera.get_pos().x, (current.get_pos().y * 32) - m_camera.get_pos().x));

		m_window.draw(rect);
	}

	m_window.display();

}

void game_graphics::update()
{
	//m_camera.move(sf::Vector2f(32 * deltatime.asSeconds(), 32 * deltatime.asSeconds()));
}

void game_graphics::process_keyboard_events(sf::Event evnt)
{
	switch (evnt.key.code)
	{
//	case sf::Keyboard::W:
//		m_camera.move(sf::Vector2f(50, 0));
//	case sf::Keyboard::S:
//		m_camera.move(sf::Vector2f(-50, 0));
//	case sf::Keyboard::A:
//		m_camera.move(sf::Vector2f(0, 50));
//	case sf::Keyboard::D:
//		m_camera.move(sf::Vector2f(0, -50));
//	default:
//		break;
//	}
}

void game_graphics::process_mouse_events(sf::Event evnt)
{
	return;
}

void game_graphics::run()
{
	while (m_window.isOpen())
	{
		// Set deltatime
		deltatime = clock.restart();

		// Process events
		sf::Event evnt;
		while (m_window.pollEvent(evnt))
		{
			switch (evnt.type)
			{
			case sf::Event::Closed:
				m_window.close();
				break;

			case sf::Event::KeyPressed:
				process_keyboard_events(evnt);
				break;

			case sf::Event::MouseButtonPressed:
				process_mouse_events(evnt);
				break;

			default:
				break;
			}
		}

		// Update Objects
		update();

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
