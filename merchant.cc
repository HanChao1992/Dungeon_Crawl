#include "merchant.h"

bool Merchant::hostile = false;

Merchant::Merchant() : Enemy(30, 70, 5, "merchant") {}

Merchant::~Merchant() {}

void Merchant::setHostile() { 
  hostile = true; 
}

bool Merchant::getHostile() { 
  return hostile; 
}