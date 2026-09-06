#pragma once

#include "GameObject.hpp"
#include <raylib.h>

class Player : private GameObject {
private:
  float maxVelocityX;
  float velocityX;
  float velocityY;
  float directionX;
  float accelerationX;
  float decelerationX;
  float jumpForce;

  float jumpTime;
  float jumpHeigth;
  float gravity;
  float jumpVelocity;

  Rectangle groundRectangle;

  void Jump();

  void CheckDirection();
  void CheckJump();
  void ApplyGravity();

public:
  Player(float x, float y, float accelerationX, float decelerationX,
         float maxVelocityX, float jumpTime, float jumpHeigth);

  void Init() override;
  void Update() override;
  void Draw() override;
  void Free() override;
};
