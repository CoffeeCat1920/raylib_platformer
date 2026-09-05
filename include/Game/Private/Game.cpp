#include "Game.hpp"

Game::Game() : player(200, 200, 8, 1, 32) {}

void Game::Init() {}

void Game::Update() { player.Update(); }

void Game::Draw() { player.Draw(); }
void Game::Close() { player.Free(); }
