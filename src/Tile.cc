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

        case 9 :
            is_walkable = false;
            break;

        case 10 :
            is_walkable = false;
            break;

        case 11 :
            is_walkable = false;
            break;

        case 12 :
            is_walkable = false;
            break;

        case 13 :
            is_walkable = false;
            break;

        case 14 :
            is_walkable = false;
            break;

        case 15 :
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

        case 24 :
            is_walkable = false;
            break;

        case 25 :
            is_walkable = false;
            break;

        case 26 :
            is_walkable = false;
            break;

        case 27 :
            is_walkable = true;
            break;

        case 28 :
            is_walkable = false;
            break;

        case 29 :
            is_walkable = false;
            break;

        case 30 :
            is_walkable = true;
            break;

        case 31 :
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

        case 35 :
            is_walkable = true;
            break;

        case 36 :
            is_walkable = true;
            break;

        case 41 :
            is_walkable = true;
            break;

        case 42 :
            is_walkable = false;
            break;

        case 43 :
            is_walkable = false;
            break;

        case 44 :
            is_walkable = false;
            break;

        case 45 :
            is_walkable = false;
            break;

        case 46 :
            is_walkable = false;
            break;

        case 47 :
            is_walkable = false;
            break;
    }

    return is_walkable;
}
