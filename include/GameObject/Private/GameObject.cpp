#include "GameObject.hpp"

GameObject ::GameObject(Vector2 position, Vector2 transform)
    : position(position), transform(transform) {
  rectangle = Rectangle{position.x, position.x, transform.x, transform.y};
}

GameObject ::GameObject()
    : position(Vector2{0, 0}), transform(Vector2{1, 1}),
      rectangle(Rectangle{position.x, position.y, transform.x, transform.y}) {}
