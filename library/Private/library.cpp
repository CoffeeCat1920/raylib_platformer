#include "library.hpp"
#include <raylib.h>

Library::Library(int a) : a(a) {}

void Library::PrintA() { InitWindow(600, 600, "Are you afraid"); }
