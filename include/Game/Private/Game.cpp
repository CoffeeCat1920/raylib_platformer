#include "Game.hpp"
#include "Settings.hpp"

Game::Game() : player(200, 200, 8, 1, 32), ground(BLOCK * 3, BLOCK * 7) {}

void Game::Init() {
  player.Init();
  ground.Init();
}

void Game::Update() {
  player.Update();
  ground.Update();
}

void Game::Draw() {
  player.Draw();
  ground.Draw();
}
void Game::Close() {
  player.Free();
  ground.Free();
}
