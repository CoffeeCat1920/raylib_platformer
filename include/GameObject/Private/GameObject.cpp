#include "GameObject.hpp"
#include "Settings.hpp"
#include <raylib.h>

GameObject ::GameObject(Vector2 position, Vector2 transform)
    : position(position), transform(transform) {
  rectangle = Rectangle{position.x, position.y, transform.x * BLOCK,
                        transform.y * BLOCK};
}

void GameObject::UpdatePosition(float x, float y) {
  position.x += x * GetFrameTime();
  position.y += y * GetFrameTime();
  rectangle.x = position.x;
  rectangle.y = position.y;
}

void GameObject::DrawBoundry() { DrawRectangleRec(rectangle, GRUVBOX_RED); }

float GameObject::GetPositionX() { return position.x; }
float GameObject::GetPositionY() { return position.y; }
