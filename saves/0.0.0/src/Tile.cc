#include <string>
#include <fstream>
#include "Tile.h"

Tile::Tile(int id, bool is_walkable, bool is_animated)
{
    m_id = id;
    m_is_walkable = is_walkable;
    m_is_animated = is_animated;
}

int Tile::getID()
{
    return m_id;
}

bool Tile::isWalkable()
{
    return m_is_walkable;
}

bool Tile::isAnimated()
{
    return m_is_animated;
}
