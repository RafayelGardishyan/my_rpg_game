#pragma once
#include <SFML/Graphics.hpp>

class texture_manager
{
public:
	sf::Texture get_grass_texture();
	texture_manager();
	~texture_manager();

private:
	sf::Texture grass_texture;
};

