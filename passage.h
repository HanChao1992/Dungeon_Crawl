#ifndef __PASSAGE_H_
#define __PASSAGE_H_

#include <string>
#include "cell.h"

using namespace std;

//A passge can be '#' or '+'
//only the player character can
//move on the passage

class Passage : public Cell { 
  Player *pc; //May have player
  char has;
 public:
  Passage(int row, int col, char icon, string name);
  ~Passage();
  void setPlayer(Player *pc);
  Player *getPlayer();
  Player *removePlayer();
  void notifyDisplay(TextDisplay &t);
};

#endif