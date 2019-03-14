#include "pch.h"
#include "game_logics.h"


game_logics::game_logics()
{
	create_test_tiles();
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