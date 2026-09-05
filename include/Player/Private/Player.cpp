#include "Player.hpp"
#include "Settings.hpp"
#include <raylib.h>

Player::Player(float x, float y, float accelerationX, float decelerationX,
               float maxVelocityX)
    : GameObject(Vector2{x, y}, Vector2{1, 1}), decelerationX(decelerationX),
      maxVelocityX(maxVelocityX), accelerationX(accelerationX) {}

void Player::CheckDirection() {
  directionX = IsKeyDown(KEY_D) - IsKeyDown(KEY_A);
}

void Player::Init() {}

void Player::Update() {
  this->CheckDirection();
  if (directionX != 0) {
    if (velocityX < maxVelocityX && velocityX > -maxVelocityX) {
      velocityX += accelerationX * directionX;
    }
  } else if (velocityX != 0) {
    if (velocityX > 0) {
      velocityX -= decelerationX;
    } else {
      velocityX += decelerationX;
    }
  }
  position.x += velocityX * GetFrameTime();
  rectangle.x = position.x;
}

void Player::Draw() { DrawRectangleRec(rectangle, GRUVBOX_RED); }

void Player::Free() {}
