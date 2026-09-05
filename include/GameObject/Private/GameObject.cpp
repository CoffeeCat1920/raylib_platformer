#include "GameObject.hpp"
#include "Settings.hpp"

GameObject ::GameObject(Vector2 position, Vector2 transform)
    : position(position), transform(transform) {
  rectangle = Rectangle{position.x, position.x, transform.x * BLOCK,
                        transform.y * BLOCK};
}

void GameObject::UpdatePosition(float x, float y) {
  position.x += x;
  position.y += y;
  rectangle.x = position.x;
  rectangle.y = position.y;
}

float GameObject::GetPositionX() { return position.x; }
float GameObject::GetPositionY() { return position.y; }
