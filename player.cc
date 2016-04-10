#include "player.h"
#include <cstdlib>

using namespace std;


Player *Player::instance = 0;

void Player::cleanup() {
  delete Player::instance;
}

Player *Player::getInstance() { 
  return instance;
}


Player::Player(int hp, int atk, int def, string race) :
Character(hp, atk, def), race(race) {}

string Player::getRace() const { 
  return race; 
}

Player::~Player() {}


