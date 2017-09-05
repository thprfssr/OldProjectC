#include <string>
#include <fstream>
#include "Tile.h"

bool Tile::getIsTileWalkable(int tile_id)
{
    bool is_walkable;
    switch(tile_id)
    {
        case 0 :
            is_walkable = false;
            break;

        case 1 :
            is_walkable = false;
            break;

        case 2 :
            is_walkable = false;
            break;

        case 3 :
            is_walkable = false;
            break;

        case 4 :
            is_walkable = false;
            break;

        case 16 :
            is_walkable = false;
            break;

        case 17 :
            is_walkable = true;
            break;

        case 18 :
            is_walkable = false;
            break;

        case 19 :
            is_walkable = false;
            break;

        case 20 :
            is_walkable = false;
            break;

        case 32 :
            is_walkable = false;
            break;

        case 33 :
            is_walkable = false;
            break;

        case 34 :
            is_walkable = false;
            break;
    }

    return is_walkable;
}
