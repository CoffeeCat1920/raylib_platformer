#include "Ground.hpp"
#include "Settings.hpp"
#include <raylib.h>

Ground::Ground(float positionX, float positionY)
    : GameObject(Vector2{positionX, positionY}, Vector2{5, 1}) {}

void Ground::Init() {}
void Ground::Update() {}
void Ground::Draw() { DrawBoundry(); }
void Ground::Free() {}
