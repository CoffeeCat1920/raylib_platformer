#include "Game.hpp"
#include "Settings.hpp"
#include <raylib.h>

int main() {
  Game game;

  InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "Raylib Platformer");

  game.Init();

  while (!WindowShouldClose()) {
    game.Update();
    BeginDrawing();
    game.Draw();
    ClearBackground(GRUVBOX_DARK0);
    EndDrawing();
  }

  game.Close();
}
