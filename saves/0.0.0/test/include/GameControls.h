#pragma once

#include <SFML/Graphics.hpp>
#include "Game.h"

class GameControls: public Game
{
public:
    static void manageInput();

    static bool isUPButtonPressed();
    static bool isDOWNButtonPressed();
    static bool isLEFTButtonPressed();
    static bool isRIGHTButtonPressed();
    static bool isAButtonPressed();
    static bool isBButtonPressed();
    static bool isXButtonPressed();
    static bool isYButtonPressed();
    static bool isLButtonPressed();
    static bool isRButtonPressed();
    static bool isSTARTButtonPressed();
    static bool isSELECTButtonPressed();

private:
    static bool m_is_UP_button_pressed;
    static bool m_is_DOWN_button_pressed;
    static bool m_is_LEFT_button_pressed;
    static bool m_is_RIGHT_button_pressed;
    static bool m_is_A_button_pressed;
    static bool m_is_B_button_pressed;
    static bool m_is_X_button_pressed;
    static bool m_is_Y_button_pressed;
    static bool m_is_L_button_pressed;
    static bool m_is_R_button_pressed;
    static bool m_is_START_button_pressed;
    static bool m_is_SELECT_button_pressed;

    static sf::Keyboard::Key m_UP_button;
    static sf::Keyboard::Key m_DOWN_button;
    static sf::Keyboard::Key m_LEFT_button;
    static sf::Keyboard::Key m_RIGHT_button;
    static sf::Keyboard::Key m_A_button;
    static sf::Keyboard::Key m_B_button;
    static sf::Keyboard::Key m_X_button;
    static sf::Keyboard::Key m_Y_button;
    static sf::Keyboard::Key m_L_button;
    static sf::Keyboard::Key m_R_button;
    static sf::Keyboard::Key m_START_button;
    static sf::Keyboard::Key m_SELECT_button;

    friend class Character;
};
