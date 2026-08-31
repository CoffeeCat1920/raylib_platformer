#include "Game.hpp"
#include <raylib.h>

int main() {
  Game game;
  game.Init();
  game.Draw();
  game.Close();
}
