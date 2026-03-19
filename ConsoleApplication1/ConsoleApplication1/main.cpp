#include <raylib.h>
#include "Simulation.hpp"

int main() {
	Color grey = { 29,29,29,255 };
	const int WINDOW_HEIGHT = 900;
	const int WINDOW_WIDTH = 1600;
	const int cellSize = 3;
	int FPS = 12;

	InitWindow(WINDOW_WIDTH, WINDOW_HEIGHT, "Game of Life");
	SetTargetFPS(FPS);
	Simulation simulation(WINDOW_WIDTH, WINDOW_HEIGHT, cellSize);
	//Simulation loop
	while (WindowShouldClose() == false) {
		//1. event handling
		if (IsKeyPressed(KEY_ENTER)) {
			simulation.Start();
			SetWindowTitle("Game of Life running...");
		}
		else if (IsKeyPressed(KEY_SPACE)) {
			simulation.Stop();
			SetWindowTitle("Game of Life stopped...");
		}

		if (IsKeyPressed(KEY_F)) {
			FPS += 2;
			SetTargetFPS(FPS);
		}
		else if (IsKeyPressed(KEY_S)) {
			if (FPS > 5) {
				FPS -= 2;
				SetTargetFPS(FPS);
			}
		}

		//2. updating state
		simulation.update();

		//3.Drawing

		BeginDrawing();
		ClearBackground(grey);
		simulation.Draw();
		EndDrawing();
	}
	CloseWindow();
}