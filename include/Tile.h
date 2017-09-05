#pragma once

#include <SFML/Graphics.hpp>
#include "Game.h"

class Tile: public Game
{
public:
    static bool getIsTileWalkable(int tile_id);
};
