#include "GameObject.hpp"
#include <raylib.h>

class Player : private GameObject {
private:
  float speed;
  float jumpForce;
  Vector2 acceleration;
  Vector2 direction;

  void CheckDirection();

public:
  Player(float x, float y, float speed);

  void Init() override;
  void Update() override;
  void Draw() override;
  void Free() override;
};
