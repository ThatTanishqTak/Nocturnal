#include "player.h"

Player::Player() { gameObjects.push_back(this); }

Player::~Player()
{

}

void Player::update()
{
	if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT)) { playerPos = GetMousePosition(); }
}

void Player::render()
{
	if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT)) { DrawCircle(static_cast<int>(playerPos.x), static_cast<int>(playerPos.y), radius, RED); }
}