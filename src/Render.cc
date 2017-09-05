#include <SFML/Graphics.hpp>
#include <fstream>
#include "Game.h"
#include "Region.h"
#include "Tile.h"
#include "Character.h"
#include "CharacterData.h"
//#include "RegionData.h"

void Game::render()
{
    //TileRegion::draw(0);
    //Region::drawTiles(0);
    Region::drawTiles();

//    Character zelda(0,sf::Vector2i(0,0));
//    zelda.command();

    Link.command();
}
