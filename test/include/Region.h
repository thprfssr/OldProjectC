#pragma once

#include <fstream>
#include <string>
#include <SFML/Graphics.hpp>
#include "Game.h"
#include "Tile.h"
#include "Character.h"

class Region: /*public Game, */ public Tile, public Character
{
public:
    void drawTiles();
    void manageRegion();

    Region(int region_id);

private:
    int m_region_id;
    
    int m_tile_array[tiles_per_region.x][tiles_per_region.y];
};
