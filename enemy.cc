#include "enemy.h"

using namespace std;

Enemy::Enemy(int hp, int atk, int def, string type) : Character(hp, atk, def), type(type) {}

string Enemy::getType() const { 
  return type; 
}

void Enemy::setHostile() {}

bool Enemy::getHostile() {}

Enemy::~Enemy() {}









