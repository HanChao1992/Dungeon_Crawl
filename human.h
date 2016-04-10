#ifndef __HUMAN_H_
#define __HUMAN_H_
#include <string>
#include "player.h"

//Human race (140HP, 20ATK, 20DEF)

class Human : public Player {
 public:
  Human();
  ~Human();
};

#endif