#pragma once
#include "tile_object_type.h"
class tile_object
{
public:
	tile_object();
	~tile_object();
	tile_object_type get_type();
private:
	tile_object_type m_type;
};

