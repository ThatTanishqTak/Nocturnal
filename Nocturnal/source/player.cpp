// The implementation of the player class

#include "player.h"

Player::Player() { gameObjects.push_back(this); } // Push back into the game object list

Player::~Player()
{
	// The player destructor
}

void Player::update()
{
	if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT)) { playerPos = GetMousePosition(); } // Simple shoot mechanic
}

void Player::render()
{
	if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT))
			{ DrawCircle(static_cast<int>(playerPos.x), static_cast<int>(playerPos.y), radius, RED); } // Rendering a red circle
}