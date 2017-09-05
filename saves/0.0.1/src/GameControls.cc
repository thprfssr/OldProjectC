#include "GameControls.h"

sf::Keyboard::Key GameControls::m_UP_button = sf::Keyboard::Key::W;
sf::Keyboard::Key GameControls::m_DOWN_button = sf::Keyboard::Key::S;
sf::Keyboard::Key GameControls::m_LEFT_button = sf::Keyboard::Key::A;
sf::Keyboard::Key GameControls::m_RIGHT_button = sf::Keyboard::Key::D;
sf::Keyboard::Key GameControls::m_A_button = sf::Keyboard::Key::L;
sf::Keyboard::Key GameControls::m_B_button = sf::Keyboard::Key::K;
sf::Keyboard::Key GameControls::m_X_button = sf::Keyboard::Key::I;
sf::Keyboard::Key GameControls::m_Y_button = sf::Keyboard::Key::J;
sf::Keyboard::Key GameControls::m_L_button = sf::Keyboard::Key::F;
sf::Keyboard::Key GameControls::m_R_button = sf::Keyboard::Key::H;
sf::Keyboard::Key GameControls::m_START_button = sf::Keyboard::Key::Return;
sf::Keyboard::Key GameControls::m_SELECT_button = sf::Keyboard::Key::Space;

bool GameControls::m_is_UP_button_pressed = false;
bool GameControls::m_is_DOWN_button_pressed = false;
bool GameControls::m_is_LEFT_button_pressed = false;
bool GameControls::m_is_RIGHT_button_pressed = false;
bool GameControls::m_is_A_button_pressed = false;
bool GameControls::m_is_B_button_pressed = false;
bool GameControls::m_is_X_button_pressed = false;
bool GameControls::m_is_Y_button_pressed = false;
bool GameControls::m_is_L_button_pressed = false;
bool GameControls::m_is_R_button_pressed = false;
bool GameControls::m_is_START_button_pressed = false;
bool GameControls::m_is_SELECT_button_pressed = false;

void GameControls::manageInput()
{
    if(sf::Keyboard::isKeyPressed(m_UP_button))
    {
        m_is_UP_button_pressed = true;
    }
//remember to add release
    if(sf::Keyboard::isKeyPressed(m_DOWN_button))
    {
        m_is_DOWN_button_pressed = true;
    }

    if(sf::Keyboard::isKeyPressed(m_LEFT_button))
    {
        m_is_LEFT_button_pressed = true;
    }

    if(sf::Keyboard::isKeyPressed(m_RIGHT_button))
    {
        m_is_RIGHT_button_pressed = true;
    }

    if(sf::Keyboard::isKeyPressed(m_A_button))
    {
        m_is_A_button_pressed = true;
    }

    if(sf::Keyboard::isKeyPressed(m_B_button))
    {
        m_is_B_button_pressed = true;
    }

    if(sf::Keyboard::isKeyPressed(m_X_button))
    {
        m_is_X_button_pressed = true;
    }

    if(sf::Keyboard::isKeyPressed(m_Y_button))
    {
        m_is_Y_button_pressed = true;
    }

    if(sf::Keyboard::isKeyPressed(m_L_button))
    {
        m_is_L_button_pressed = true;
    }

    if(sf::Keyboard::isKeyPressed(m_R_button))
    {
        m_is_R_button_pressed = true;
    }

    if(sf::Keyboard::isKeyPressed(m_START_button))
    {
        m_is_START_button_pressed = true;
    }

    if(sf::Keyboard::isKeyPressed(m_SELECT_button))
    {
        m_is_SELECT_button_pressed = true;
    }
}

bool GameControls::isUPButtonPressed()
{
    return m_is_UP_button_pressed;
}

bool GameControls::isDOWNButtonPressed()
{
    return m_is_DOWN_button_pressed;
}

bool GameControls::isLEFTButtonPressed()
{
    return m_is_LEFT_button_pressed;
}

bool GameControls::isRIGHTButtonPressed()
{
    return m_is_RIGHT_button_pressed;
}

bool GameControls::isAButtonPressed()
{
    return m_is_A_button_pressed;
}

bool GameControls::isBButtonPressed()
{
    return m_is_B_button_pressed;
}

bool GameControls::isXButtonPressed()
{
    return m_is_X_button_pressed;
}

bool GameControls::isYButtonPressed()
{
    return m_is_Y_button_pressed;
}

bool GameControls::isLButtonPressed()
{
    return m_is_L_button_pressed;
}

bool GameControls::isRButtonPressed()
{
    return m_is_R_button_pressed;
}

bool GameControls::isSTARTButtonPressed()
{
    return m_is_START_button_pressed;
}

bool GameControls::isSELECTButtonPressed()
{
    return m_is_SELECT_button_pressed;
}



