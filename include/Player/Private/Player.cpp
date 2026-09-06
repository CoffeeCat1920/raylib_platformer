#include "Player.hpp"
#include "Settings.hpp"
#include <raylib.h>

Player::Player(float x, float y, float accelerationX, float decelerationX,
               float maxVelocityX, float jumpTime, float jumpHeigth)
    : GameObject(Vector2{x, y}, Vector2{1, 2}, GRUVBOX_AQUA),
      decelerationX(decelerationX), maxVelocityX(maxVelocityX),
      accelerationX(accelerationX), jumpTime(jumpTime), jumpHeigth(jumpHeigth) {
  gravity = (2 * jumpHeigth) / (jumpTime * jumpTime);
  jumpVelocity = gravity * jumpTime;
  velocityX = 0;
  velocityY = 0;
}

void Player::ApplyGravity() { velocityY += gravity; }

void Player::CheckDirection() {
  directionX = IsKeyDown(KEY_D) - IsKeyDown(KEY_A);
}

void Player::Init() {}

void Player::Update() {

  CheckDirection();
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

  ApplyGravity();

  UpdatePosition(velocityX, velocityY);
}

void Player::Draw() { DrawBoundry(); }

void Player::Free() {}
