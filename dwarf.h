#ifndef __DWARF_H_
#define __DWARF_H_
#include <string>
#include "player.h"

//Dwarf race(100HP, 20ATK, 30DEF)

class Dwarf : public Player {
 public:
  Dwarf();
  ~Dwarf();
};

#endif