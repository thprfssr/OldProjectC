#include "Game.h"
#include "Character.h"
#include "GameControls.h"

Character::Character(int id, sf::Vector2i character_dimensions)
{
    m_id = id;
    m_character_dimensions = character_dimensions;
    m_current_coordinates = sf::Vector2i(0,0);
    facing_direction = facing_down;
    m_hitbox[0] = sf::Vector2i(8,17);
    m_hitbox[1] = sf::Vector2i(23,26);
}

int Character::getID()
{
    return m_id;
}

sf::Vector2i Character::getCharacterDimensions()
{
    return m_character_dimensions;
}

void Character::command()
{

    if(sf::Keyboard::isKeyPressed(GameControls::m_UP_button))
    {
        walkUp();
    }

    if(sf::Keyboard::isKeyPressed(GameControls::m_DOWN_button))
    {
        walkDown();
    }

    if(sf::Keyboard::isKeyPressed(GameControls::m_LEFT_button))
    {
        walkLeft();
    }

    if(sf::Keyboard::isKeyPressed(GameControls::m_RIGHT_button))
    {
        walkRight();
    }

    if(isIdle())
    {
        idle();
    }
}

void Character::draw(sf::Vector2i sprite_frame_coordinates)
{
    sf::Texture sprite_texture;
    sf::Sprite sprite;

    sprite_texture.loadFromFile("../resources/LinkSpriteSheet.png");
    sprite.setTexture(sprite_texture);

    sprite.setPosition(m_current_coordinates.x, m_current_coordinates.y);
    sprite.setTextureRect(sf::IntRect(32 * sprite_frame_coordinates.x, 32 * sprite_frame_coordinates.y,32,32));

    main_window.draw(sprite);
}

sf::Vector2i Character::getCurrentCoordinates()
{
    return m_current_coordinates;
}

void Character::setCurrentCoordinates(sf::Vector2i current_coordinates)
{
    m_current_coordinates = current_coordinates;
}

bool Character::isAtScreenEdge()
{
    return m_is_at_screen_edge;
}

void Character::setAtScreenEdge()
{
    m_is_at_screen_edge = true;
}

int Character::getHealth()
{
    return m_health;
}

void Character::setHealth(int health)
{
    m_health = health;
}

bool Character::isIdle()
{
    if ( ! sf::Keyboard::isKeyPressed(GameControls::m_UP_button)
      && ! sf::Keyboard::isKeyPressed(GameControls::m_DOWN_button)
      && ! sf::Keyboard::isKeyPressed(GameControls::m_LEFT_button)
      && ! sf::Keyboard::isKeyPressed(GameControls::m_RIGHT_button) )
    return true;

    else return false;
}

void Character::idle()
{
    if(facing_direction == facing_up)
    draw(sf::Vector2i(0,2));

    if(facing_direction == facing_down)
    draw(sf::Vector2i(0,0));

    if(facing_direction == facing_left)
    draw(sf::Vector2i(0,3));

    if(facing_direction == facing_right)
    draw(sf::Vector2i(0,1));
}

void Character::walkUp()
{
    int animation_frames_per_game_cycle = 3;
    int number_of_animation_frames = 10;
    int initial_frame = 3;

    draw(sf::Vector2i(initial_frame + ( ( Game::frame_count / animation_frames_per_game_cycle ) % number_of_animation_frames), 2));
    //draw(sf::Vector2i(initial_frame + number_of_animation_frames * (frame_count % animation_frames_per_second) / Game::frames_per_second, 2));
    setCurrentCoordinates(sf::Vector2i(m_current_coordinates.x, m_current_coordinates.y - 2));

    facing_direction = facing_up;
}

void Character::walkDown()
{
    int animation_frames_per_game_cycle = 3;
    int number_of_animation_frames = 10;
    int initial_frame = 3;

    draw(sf::Vector2i(initial_frame + ( ( Game::frame_count / animation_frames_per_game_cycle ) % number_of_animation_frames), 0));
    setCurrentCoordinates(sf::Vector2i(m_current_coordinates.x, m_current_coordinates.y + 2));

    facing_direction = facing_down;
}

void Character::walkLeft()
{
    int animation_frames_per_game_cycle = 3;
    int number_of_animation_frames = 10;
    int initial_frame = 3;

    draw(sf::Vector2i(initial_frame + ( ( Game::frame_count / animation_frames_per_game_cycle ) % number_of_animation_frames), 3));
    setCurrentCoordinates(sf::Vector2i(m_current_coordinates.x - 2, m_current_coordinates.y));

    facing_direction = facing_left;
}

void Character::walkRight()
{
    int animation_frames_per_game_cycle = 3;
    int number_of_animation_frames = 10;
    int initial_frame = 3;

    draw(sf::Vector2i(initial_frame + ( ( Game::frame_count / animation_frames_per_game_cycle ) % number_of_animation_frames), 1));
    setCurrentCoordinates(sf::Vector2i(m_current_coordinates.x + 2, m_current_coordinates.y));

    facing_direction = facing_right;
}

void Character::attack()
{
}

void Character::useItem()
{
}
