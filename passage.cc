#include "passage.h"

using namespace std;

Passage::Passage(int row, int col, char icon, string name) : Cell(row, col, icon, name){
  neighbours = new Cell *[maxNeighbours]; 
  for (int i = 0; i < maxNeighbours; i++) {
	neighbours[i] = 0;
  }
  if (name == "pluspass") {
	icon = '+';
  }
  else if (name == "hashpass") {
	icon = '#';
  }
}

Passage::~Passage() {}

void Passage::setPlayer(Player *pc) {
  this->pc = pc;
  icon = '@';
  has = icon;
}

Player *Passage::getPlayer() { 
  return pc; 
}

Player *Passage::removePlayer() {
  Player *keep = pc;
  pc = 0;
  if (name == "pluspass") {
	icon = '+';
  }
  else if (name == "hashpass") {
	icon = '#';
  }
  has = icon;
  return keep;
}

void Passage::notifyDisplay(TextDisplay &t) {
  t.notify(row, col, icon);
}


