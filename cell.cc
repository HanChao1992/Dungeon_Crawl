#include <string>
#include "cell.h"
#include "textdisplay.h"

using namespace std;

Cell::Cell(int row, int col, char icon, string name) :
name(name), icon(icon), numNeighbours(0), row(row), col(col) {
  neighbours = 0;
}

char Cell::getIcon() const { 
  return icon; 
}

int Cell::getRow() {
  return row;
}

int Cell::getCol() {
  return col;
}


void Cell::addNeighbour(int pos, Cell *neighbour) {
  if (!neighbours) {
	neighbours = new Cell *[maxNeighbours];
  }
	neighbours[pos] = neighbour;
	numNeighbours++;
}

Cell **Cell::getNeighbours() { 
  return neighbours; 
}

void Cell::setPlayer(Player *pc) {}

Player *Cell::getPlayer() {}

Player *Cell::removePlayer() {}

void Cell::setItem(Item *it) {}

void Cell::setEnemy(Enemy *ec) {}

void Cell::notifyDisplay(TextDisplay &t) {}

Cell::~Cell() { 
  delete[] neighbours; 
}





