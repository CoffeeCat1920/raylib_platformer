#include <raylib.h>

class GameObject {
private:
  Vector2 position;
  Vector2 transform;
  Rectangle rectangle;

public:
  GameObject(Vector2 position, Vector2 transform);

  virtual void Init() = 0;
  virtual void Update() = 0;
  virtual void Draw() = 0;
  virtual void Free() = 0;

  float GetPositionX();
  float GetPositionY();
  void UpdatePosition(float x, float y);
};
