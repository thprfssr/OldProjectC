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
    static void drawTiles();
    static int getTileArray(int tile_coordinates);
    static bool getIsTileWalkableArray(int tile_coordinates);

private:
    static int m_current_region_id;

    static int m_tile_array[256];
    static bool m_is_tile_walkable_array[256];
};
