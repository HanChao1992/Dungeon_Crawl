#ifndef __DRAGON_H_
#define __DRAGON_H_

#include <string>
#include "enemy.h"

//Dragon(150HP 20ATK 20DEF)

class Dragon : public Enemy {
 bool hostile; //Used for the current
	           //dragon to determine
	           //hostility
 public:
  Dragon();
  ~Dragon();
  void setHostile(); 
  bool getHostile();
};

#endif