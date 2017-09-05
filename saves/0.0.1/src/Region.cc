#include <string>
#include <fstream>
#include <iostream>
#include "Region.h"

int Region::m_current_region_id = 0;
int Region::m_tile_array[256] = {0};
bool Region::m_is_tile_walkable_array[256] = {0};

void Region::drawTiles()
{
    std::string file_directory = "../resources/";
    std::string file_number = std::to_string(m_current_region_id);
    std::string file_name = file_directory + file_number + ".txt";

    std::ifstream tile_map_layout;
    if(!tile_map_layout.is_open())
    tile_map_layout.open(file_name);
    else return;

    sf::Texture tile_texture;
    sf::Sprite tiles;

    if (tile_map_layout.is_open())
    {
	tile_texture.loadFromFile("../resources/TileAtlas.png");
	tiles.setTexture(tile_texture);

	for(int c = 0; !tile_map_layout.eof(); c++)
        {
	    std::string file_string;
	    tile_map_layout >> file_string;
	    std::string tile_coordinates_string = file_string.substr(0, 3);

            if(tile_coordinates_string.find(" ") == std::string::npos && tile_coordinates_string.find("\n") == std::string::npos)
            {
                int tile_coordinates = 100 * ( tile_coordinates_string[0] - '0' )
                                      + 10 * ( tile_coordinates_string[1] - '0' )
                                      +  1 * ( tile_coordinates_string[2] - '0' );
                m_tile_array[c] = tile_coordinates;
            }
	}
    }

    for(int c = 0; c < Game::tiles_per_region.x * Game::tiles_per_region.y; c++)
    {
        m_is_tile_walkable_array[c] = Tile::getIsTileWalkable(m_tile_array[c]);
    }

    for(int c = 0; c < Game::tiles_per_region.x * Game::tiles_per_region.y; c++)
    {
        tiles.setPosition( ( c % Game::tiles_per_region.x ) * Game::pixels_per_tile.x, ( c / Game::tiles_per_region.y ) * Game::pixels_per_tile.y );
        tiles.setTextureRect(sf::IntRect((m_tile_array[c] % Game::tiles_in_tile_atlas.x ) * Game::pixels_per_tile.x,
                                         (m_tile_array[c] / Game::tiles_in_tile_atlas.y ) * Game::pixels_per_tile.y,
                                          Game::pixels_per_tile.x, Game::pixels_per_tile.y));

        Game::main_window.draw(tiles);
    }
}

int Region::getTileArray(int tile_coordinates)
{
    return m_tile_array[tile_coordinates];
}

bool Region::getIsTileWalkableArray(int tile_coordinates)
{
    return m_is_tile_walkable_array[tile_coordinates];
}
