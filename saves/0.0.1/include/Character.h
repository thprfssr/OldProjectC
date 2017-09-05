#pragma once

#include <SFML/Graphics.hpp>
#include "Game.h"

class Character: public Game
{
public:
    Character(int id, sf::Vector2i character_dimensions);

    int getID();
    sf::Vector2i getCharacterDimensions();

    void draw(sf::Vector2i sprite_frame_coordinates);
    sf::Vector2i getCurrentCoordinates();
    void setCurrentCoordinates(sf::Vector2i current_coordinates);

    bool isAtScreenEdge();
    void setAtScreenEdge();
    int getHealth();
    void setHealth(int health);

    bool collisionUp();
    bool collisionDown();
    bool collisionLeft();
    bool collisionRight();

    void command();
    void walkUp();
    void walkDown();
    void walkLeft();
    void walkRight();
    void idle();
    void attack();
    void useItem();
    bool isIdle();

    // two types of collision: character-character and character-wall. remember alltp if link walks toward a north wall.

private:
    int m_id;
    sf::Vector2i m_character_dimensions;

    sf::Vector2i m_current_coordinates;
    bool m_is_at_screen_edge;
    int m_health;
    
    enum FacingDirection { facing_up, facing_down, facing_left, facing_right };
    FacingDirection facing_direction;

    int m_walking_speed_pixels_per_cycle;

    sf::Vector2i m_hitbox_location;
    sf::Vector2i m_hitbox_dimensions;
};
