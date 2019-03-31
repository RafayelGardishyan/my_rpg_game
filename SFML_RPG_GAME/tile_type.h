#pragma once
#include <SFML/Graphics.hpp>
#include <string.h>

enum class tile_type
{
	grass,
	stone,
	dirt,
	water
};

std::string get_tile_type_string(tile_type type);
sf::Color get_tile_color(tile_type type);

