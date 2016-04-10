#ifndef __WEREWOLF_H_
#define __WEREWOLF_H_

#include <string>
#include "enemy.h"

//Werewolf(120HP 30ATK 5DEF)

class Werewolf : public Enemy {
 public:
  Werewolf();
  ~Werewolf();
};

#endif