#pragma once

#include "Ground.hpp"
#include "Player.hpp"

class Game {
private:
  Player player;
  Ground ground;

public:
  Game();
  void Init();
  void Update();
  void Draw();
  void Close();
};
