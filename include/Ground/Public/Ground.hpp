#pragma once

#include "GameObject.hpp"

class Ground : public GameObject {
private:
public:
  Ground(float positionX, float positionY);
  void Init() override;
  void Update() override;
  void Draw() override;
  void Free() override;
};
