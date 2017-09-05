#include <SFML/Graphics.hpp>
#include <iostream>
#include <fstream>
#include <cctype>
#include <sstream>
#include <string>
#include "Game.h"

int Game::frames_per_second = 60;
int Game::frame_count = 0;
sf::Vector2i Game::pixels_per_tile = sf::Vector2i(16,16);
sf::Vector2i Game::tiles_per_region = sf::Vector2i(16,16);
sf::Vector2i Game::tiles_in_tile_atlas = sf::Vector2i(16,16);
sf::Vector2i Game::screens_in_world = sf::Vector2i(16,16);
int Game::number_of_draw_layers = 6;
bool Game::is_running = false;
bool Game::is_exiting = false;

sf::RenderWindow Game::main_window;
sf::View Game::screen_view;

void Game::start()
{
    if(is_running)
    return;
    
    main_window.create(sf::VideoMode(pixels_per_tile.x * tiles_per_region.x,
                                     pixels_per_tile.y * tiles_per_region.y,
                                     32), "Cythen", sf::Style::Resize + sf::Style::Close);
    main_window.setFramerateLimit(frames_per_second);
    is_running = true;

    screen_view.setSize(pixels_per_tile.x * tiles_per_region.x, pixels_per_tile.y * tiles_per_region.y);
    screen_view.setCenter(screen_view.getSize().x / 2, screen_view.getSize().y / 2);
    screen_view = getLetterboxView(screen_view, pixels_per_tile.x * tiles_per_region.x, pixels_per_tile.y * tiles_per_region.y);

    while(!is_exiting)
    {
        sf::Event current_event;
        while(main_window.pollEvent(current_event))
        {

            if(current_event.type == sf::Event::Closed)
            {
                is_exiting = true;
            }

            if(current_event.type == sf::Event::Resized)
            {
                screen_view = getLetterboxView(screen_view, current_event.size.width, current_event.size.height);
            }
        }

        gameLoop();
    }

    main_window.close();
}

void Game::gameLoop()
{
    main_window.clear(sf::Color(0,0,0));

    main_window.setView(screen_view);

    processInput();
    updateGameState();
    render();

    frame_count++;

    main_window.display();
}

sf::View Game::getLetterboxView(sf::View view, int window_width, int window_height)
{

    // Compares the aspect ratio of the window to the aspect ratio of the view,
    // and sets the view's viewport accordingly in order to archieve a letterbox effect.
    // A new view (with a new viewport set) is returned.

    float windowRatio = window_width / (float) window_height;
    float viewRatio = view.getSize().x / (float) view.getSize().y;
    float sizeX = 1;
    float sizeY = 1;
    float posX = 0;
    float posY = 0;

    bool horizontalSpacing = true;
    if (windowRatio < viewRatio)
        horizontalSpacing = false;

    // If horizontalSpacing is true, the black bars will appear on the left and right side.
    // Otherwise, the black bars will appear on the top and bottom.

    if (horizontalSpacing) {
        sizeX = viewRatio / windowRatio;
        posX = (1 - sizeX) / 2.f;
    }

    else {
        sizeY = windowRatio / viewRatio;
        posY = (1 - sizeY) / 2.f;
    }

    view.setViewport( sf::FloatRect(posX, posY, sizeX, sizeY) );

    return view;
}

