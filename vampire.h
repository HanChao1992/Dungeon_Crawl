#ifndef __VAMPIRE_H_
#define __VAMPIRE_H_

#include <string>
#include "enemy.h"

//Vampire(50HP 25ATK 25DEF)

class Vampire : public Enemy {
 public:
  Vampire();
  ~Vampire();
};

#endif