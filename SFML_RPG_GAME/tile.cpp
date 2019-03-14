#include "pch.h"
#include "tile.h"


tile::tile()
{
}


tile::~tile()
{
}

sf::Vector2i tile::get_pos() {
	return sf::Vector2i(m_x, m_y);
}

tile_type tile::get_type()
{
	return m_type;
}

void tile::set_pos(sf::Vector2i pos)
{
	m_x = pos.x;
	m_y = pos.y;
}

void tile::set_type(tile_type type)
{
	m_type = type;
}