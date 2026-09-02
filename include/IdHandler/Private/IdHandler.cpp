#include "IdHandler.hpp"
#include <stdexcept>

int IdHandler::GetId() {
  if (top >= available_ids.size()) {
    throw std::runtime_error("Maximum Id's created");
  }
  return available_ids[top];
  top++;
}

void IdHandler::ReleseId(int id) {
  if (top == 0) {
    throw std::runtime_error("Illegel Id Relesease");
  }
  available_ids[top - 1] = id;
  top--;
}
