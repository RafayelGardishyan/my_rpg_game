#pragma once
#include"tile_type.h"

class tile
{
public:
	static std::vector<std::vector<tile_type>> map1;
	tile();
	sf::Vector2i get_pos();
	tile_type get_type();

	void set_pos(sf::Vector2i pos);
	void set_type(tile_type type);

	~tile();

private:
	int m_x;
	int m_y;
	tile_type m_type;
};
