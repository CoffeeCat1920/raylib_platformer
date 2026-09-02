#include <raylib.h>

class GameObject {
private:
  Vector2 position;
  Vector2 transform;
  Rectangle rectangle;
  int id;

public:
  GameObject(Vector2 position, Vector2 transform);
  GameObject();

  virtual void Init() = 0;
  virtual void Update() = 0;
  virtual void Draw() = 0;
  virtual void Destroy() = 0;
};
