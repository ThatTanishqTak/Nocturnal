#include "globals.h"
#include "gameobjects.h"
#include "raylib.h"
#include "enemy.h"
#include "player.h"

int main()
{
	InitWindow(windowWidth, windowHeight, "Nocturnal");
	SetTargetFPS(60);

	Player player;
	Enemy enemy;

	while (!WindowShouldClose())
	{
		for (GameObjects* gameObjects : gameObjects) { gameObjects->update(); }

		BeginDrawing();
		ClearBackground(BLACK);

		for (GameObjects* gameObjects : gameObjects) { gameObjects->render(); }

		EndDrawing();
	}

	CloseWindow();

	return 0;
}