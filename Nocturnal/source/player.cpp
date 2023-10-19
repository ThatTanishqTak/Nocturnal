// The implementation of the player class

#include "player.h"

Player::Player() { gameObjects.push_back(this); } // Push back into the game object list

Player::~Player()
{
	// The player destructor
}

void Player::update()
{
	if (bullets > 0)
	{
		// Simple shoot mechanic
		if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT))
		{ 
			playerPos = GetMousePosition();
			bullets--;
		}
	}
	if (bullets <= 0) { bullets = 0; }

	if (IsMouseButtonPressed(MOUSE_BUTTON_RIGHT)) { bullets = 6; }
}

void Player::render()
{
	if (bullets > 0)
	{
		if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT))
			DrawCircle(static_cast<int>(playerPos.x), static_cast<int>(playerPos.y), radius, RED); // Rendering a red circle
	}
}