#pragma once

#include "tile.h"
#include <vector>
#include "player.h"

class game_logics
{
public:
	game_logics();
	~game_logics();

	int selected_tile;
	std::vector<tile> get_tiles();
	void process_mouse_events(sf::Event evnt);
	player& get_player();
private:
	void create_test_tiles();
	void create_map(std::vector<std::vector<tile_type>> map);
	std::vector<tile> m_tiles;
	player p;
};

