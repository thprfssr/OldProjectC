#pragma once

#include <fstream>
#include <string>
#include <SFML/Graphics.hpp>
#include "Game.h"
#include "Tile.h"
#include "Character.h"

class Region
{
public:
    void manageRegion();
    void drawTiles();

    Region(int region_id);

private:
    int m_region_id;
    int m_tile_array[256];
};
