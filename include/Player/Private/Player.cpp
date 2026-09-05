#include "Player.hpp"
#include "Settings.hpp"
#include <iostream>
#include <raylib.h>

Player::Player(float x, float y, float speed)
    : GameObject(Vector2{x, y}, Vector2{1, 1}) {}

void Player::CheckDirection() {
  this->direction.x = IsKeyDown(KEY_D) - IsKeyDown(KEY_A);
}

void Player::Init() {}

void Player::Update() {
  this->CheckDirection();
  if (this->direction.x != 0) {
    std::cout << "Position" << position.x << std::endl;
    position.x += speed * direction.x;
    this->rectangle.x = position.x;
  }
}

void Player::Draw() { DrawRectangleRec(rectangle, GRUVBOX_RED); }

void Player::Free() {}
