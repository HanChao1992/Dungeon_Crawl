#ifndef __ORC_H_
#define __ORC_H_
#include <string>
#include "player.h"

//Orc race (180HP, 30ATK, 25DEF)

class Orc : public Player {
 public:
  Orc();
  ~Orc();
};

#endif