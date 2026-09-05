#include "GameObject.hpp"
#include "Settings.hpp"

GameObject ::GameObject(Vector2 position, Vector2 transform)
    : position(position), transform(transform) {
  rectangle = Rectangle{position.x, position.x, transform.x * BLOCK,
                        transform.y * BLOCK};
}
