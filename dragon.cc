#include "dragon.h"

Dragon::Dragon() : Enemy(150, 20, 20, "dragon") {
  hostile = false;
}

Dragon::~Dragon() {}

void Dragon::setHostile() { 
  hostile = true; }

bool Dragon::getHostile() { 
  return hostile; 
}