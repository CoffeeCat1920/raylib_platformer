#pragma once

#include "GameObject.hpp"
#include <raylib.h>

class Player : private GameObject {
private:
  float maxVelocityX;
  float velocityX;
  float directionX;
  float accelerationX;
  float decelerationX;
  float jumpForce;

  void CheckDirection();

public:
  Player(float x, float y, float accelerationX, float decelerationX,
         float maxVelocityX);

  void Init() override;
  void Update() override;
  void Draw() override;
  void Free() override;
};
