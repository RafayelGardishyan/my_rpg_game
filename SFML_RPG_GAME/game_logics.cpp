#include "pch.h"
#include "game_logics.h"


game_logics::game_logics()
{
	//create_test_tiles();
	create_map(tile::map1);
}


game_logics::~game_logics()
{
}

std::vector<tile> game_logics::get_tiles() {
	return m_tiles;
}

void game_logics::create_test_tiles()
{
	tile t;
	t.set_pos(sf::Vector2i(0, 0));
	t.set_type(tile_type::grass);
	m_tiles.push_back(t);

	tile t1;
	t1.set_pos(sf::Vector2i(1, 0));
	t1.set_type(tile_type::stone);
	m_tiles.push_back(t1);


	tile t2;
	t2.set_pos(sf::Vector2i(1, 1));
	t2.set_type(tile_type::water);
	m_tiles.push_back(t2);


	tile t3;
	t3.set_pos(sf::Vector2i(0, 1));
	t3.set_type(tile_type::grass);
	m_tiles.push_back(t3);
}

void game_logics::create_map(std::vector<std::vector<tile_type>> map)
{
	for (unsigned int i = 0; i < map.size(); i++)
	{
		std::vector<tile_type> current_row = map.at(i);
		for (unsigned int j = 0; j < current_row.size(); j++)
		{
			tile t;
			t.set_pos(sf::Vector2i(j, i));
			t.set_type(current_row.at(j));
			m_tiles.push_back(t);
		}
	}
}

void game_logics::process_mouse_events(sf::Event evnt)
{
	switch (evnt.type)
	{
	case sf::Event::MouseButtonPressed:
		if (evnt.mouseButton.button == sf::Mouse::Left)
		{
			for (unsigned int i = 0; i < m_tiles.size(); i++)
			{
				tile current = m_tiles.at(i);
				int x = evnt.mouseButton.x % 32;
				int y = evnt.mouseButton.y % 32;

				if (current.get_pos().x == x && current.get_pos().y == y)
				{
					selected_tile = i;
				}
				else {
					selected_tile = -1;
				}

			}
		}
		break;
	default:
		break;
	}
}