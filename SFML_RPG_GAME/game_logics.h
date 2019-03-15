#pragma once

#include "tile.h"
#include <vector>

class game_logics
{
public:
	game_logics();
	~game_logics();

	std::vector<tile> get_tiles();

private:
	void create_test_tiles();
	void create_map(std::vector<std::vector<tile_type>> map);
	std::vector<tile> m_tiles;
};

