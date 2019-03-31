#include "pch.h"
#include "tile_type.h"


sf::Color get_tile_color(tile_type type)
{
	switch (type)
	{
	case tile_type::grass:
		return sf::Color(0, 255, 0);
	case tile_type::stone:
		return sf::Color(150, 150, 150);
	case tile_type::water:
		return sf::Color(0, 0, 255);
	case tile_type::dirt:
		return sf::Color(137, 36, 0);
	default:
		return sf::Color(0, 0, 0);
	}
}

std::string get_tile_type_string(tile_type type)
{
	switch (type)
	{
	case tile_type::grass:
		return "grass";
	case tile_type::stone:
		return "stone";
	case tile_type::water:
		return "water";
	default:
		return "none";
	}
}
