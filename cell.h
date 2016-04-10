#ifndef __CELL_H_
#define __CELL_H_

#include <string>
#include "textdisplay.h"
#include "player.h"
#include "enemy.h"
#include "item.h"

using namespace std;

//each cell only has up to 8 neighbours, they each lie in the direction
//of northwest(position 0), north(position 1), northeast(position 2),
//west(position 3), east(position 4), southwest(position 5£©£¬ south(position 6),
//southeast(position 7).
// 0 1 2
// 3 C 4
// 5 6 7
const int maxNeighbours = 8; 

class Cell {
 protected:
  string name; //the name of cell can be one of the followings:
               //a vertial wall "vwall", a horizontal wall "hwall"
               //a + passage "pluspass", a # passage "hashpass",
               //a tile "tile", and a blank "nothing".
  char icon; //each type of cell has the icon of the followings:
             //"vwall" as '|', "hwall" as '-', "pluspass" as '+',
             //a "hashpass" as '#', a "tile" as '.', a "nothing" as
             //' '.
  int numNeighbours; //the number of neighbours a cell has.
  Cell **neighbours; //the neighbours.
  int row, col; //the coordinate of the cell
  Cell(int row, int col, char icon, string name); //ctor
 public:
  char getIcon() const; 
  int getRow();
  int getCol();
  void addNeighbour(int pos, Cell *neighbour); //add a neighbour
                                               //to one of the 
                                               //8 positions
  Cell **getNeighbours();
  virtual void setPlayer(Player *pc); 
  virtual Player *getPlayer();
  virtual Player *removePlayer();
  virtual void setItem(Item *it);
  virtual void setEnemy(Enemy *ec);
  virtual void notifyDisplay(TextDisplay &t); //notify the TextDisplay
  virtual ~Cell() = 0;
};

#endif