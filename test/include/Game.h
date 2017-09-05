#pragma once

#include <SFML/Graphics.hpp>

class Game
{
public:

    static void start();

private:
    static const int frames_per_second;
    static int frame_count;
    static const sf::Vector2i pixels_per_tile;
    static const sf::Vector2i tiles_per_region;
    static const sf::Vector2i tiles_in_tile_atlas;
    static const sf::Vector2i screens_in_world;
    static const int number_of_draw_layers;

    static void gameLoop();
    static void processInput();
    static void updateGameState();
    static void render();
    static sf::View getLetterboxView(sf::View view, int window_width, int window_height);

    static bool is_running;
    static bool is_exiting;

    static sf::RenderWindow main_window;
    static sf::View screen_view;

    friend class Region;
    friend class Character;
};
