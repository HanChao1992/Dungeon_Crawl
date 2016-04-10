#ifndef __ELVES_H_
#define __ELVES_H_
#include <string>
#include "player.h"

//Elf race (140HP, 30ATK, 10DEF)

class Elves : public Player {
 public:
  Elves();
  ~Elves();
};

#endif