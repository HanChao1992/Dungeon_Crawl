#ifndef __GOBLIN_H_
#define __GOBLIN_H_

#include <string>
#include "enemy.h"

//Goblin(70HP 5ATK 10DEF)

class Goblin : public Enemy {
  public:
	Goblin();
	~Goblin();
};

#endif