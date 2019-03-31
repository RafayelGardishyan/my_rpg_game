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

std::vector<std::vector<tile_type>> tile::map1 = {
	{tile_type::dirt, tile_type::stone, tile_type::grass, tile_type::grass, tile_type::grass, tile_type::grass, tile_type::grass, tile_type::grass},
	{tile_type::dirt, tile_type::stone, tile_type::stone, tile_type::grass, tile_type::grass, tile_type::grass, tile_type::grass, tile_type::grass},
	{tile_type::dirt, tile_type::water, tile_type::stone, tile_type::stone, tile_type::grass, tile_type::grass, tile_type::grass, tile_type::grass},
    {tile_type::dirt, tile_type::water, tile_type::water, tile_type::stone, tile_type::stone, tile_type::grass, tile_type::grass, tile_type::grass},
	{tile_type::dirt, tile_type::water, tile_type::water, tile_type::water, tile_type::stone, tile_type::grass, tile_type::grass, tile_type::grass},
	{tile_type::dirt, tile_type::dirt, tile_type::dirt, tile_type::dirt, tile_type::dirt, tile_type::grass, tile_type::grass, tile_type::grass},
	{tile_type::grass, tile_type::grass, tile_type::grass, tile_type::grass, tile_type::grass, tile_type::grass, tile_type::grass, tile_type::grass},
	{tile_type::grass, tile_type::grass, tile_type::grass, tile_type::grass, tile_type::grass, tile_type::grass, tile_type::grass, tile_type::grass}
};
