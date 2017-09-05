#pragma once

#include <SFML/Graphics.hpp>
#include "Game.h"

class Tile: public Game
{
public:
    void draw(sf::Vector2i coordinates);
    int getID();
    bool isWalkable();
    bool isAnimated();
    Tile(int id, bool is_walkable, bool is_animated);

private:
    int m_id;
    bool m_is_walkable;
    bool m_is_animated;
};
