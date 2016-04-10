#include "tile.h"

using namespace std;

Tile::Tile(int row, int col, char icon, string name) : Cell(row, col, '.', "tile"){
  neighbours = new Cell *[maxNeighbours];
  for (int j = 0; j < maxNeighbours; j++) {
	neighbours[j] = 0;
  }
}

Tile::~Tile() {}

void Tile::setPlayer(Player *pc) {
  this->pc = pc;
  icon = '@';
  has = icon;
}

Player *Tile::getPlayer() { 
  return pc; 
}

Player *Tile::removePlayer() {
  Player *keep = pc;
  pc = 0;
  icon = '.';
  has = icon;
  return keep;
}

void Tile::setItem(Item *it) {
  this->it = it;
  icon = 'P';
  has = icon;
}

void Tile::setEnemy(Enemy *ec) {
  this->ec = ec;
  if (ec->getType() == "vampire") {
    icon = 'V';
  }
  else if (ec->getType() == "werewolf") {
    icon = 'W';
  }
  else if (ec->getType() == "troll") {
	icon = 'T';
  }
  else if (ec->getType() == "goblin") {
	icon = 'N';
  }
  else if (ec->getType() == "phoenix") {
	icon = 'X';
  }
  else if (ec->getType() == "dragon") {
	icon = 'D';
  }
  else if (ec->getType() == "merchant") {
	icon = 'M';
  }
  has = icon;
}

void Tile::notifyDisplay(TextDisplay &t) {
  t.notify(row, col, icon);
}



