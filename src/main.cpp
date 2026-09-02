#include "Game.hpp"
#include "Settings.hpp"
#include <raylib.h>

int main() {
  Game game;

  InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "Raylib Platformer");

  game.Init();

  while (!WindowShouldClose()) {
    BeginDrawing();
    game.Draw();
    ClearBackground(GRUVBOX_RED);
    EndDrawing();
  }

  game.Close();
}
