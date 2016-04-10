#include <string>
#include "character.h"

using namespace std;

Character::Character(int hp, int atk, int def) : hp(hp), atk(atk), def(def) {}

int Character::getHp() { 
  return hp; 
}

Character::~Character() {}