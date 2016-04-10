#ifndef __TILE_H_
#define __TILE_H_

#include <string>
#include "cell.h"

using namespace std;

//A tile is denoted '.' in the 
//default floor. It is where the
//most action happens.

class Tile : public Cell {
  Item *it; //May have a item
  Player *pc; //May have player
  Enemy *ec; //May have an enemy
  char has; //The object that occupies
            //the tile, can be one of the
            //following: '@'(player), 'W'(werewolf)
            //'V'(vampire), 'N'(goblin), 'M'(merchant)
            //'D'(dragon), 'X'(phoenix), 'T'(troll), or
            // '.'(nothing occupies)
 public:
  Tile(int row, int col, char icon, string name); //ctor
  ~Tile();
  void setPlayer(Player *pc); //put a player character on
                              //the tile
  Player *getPlayer();
  Player *removePlayer(); //remove the player character from
                          //the tile but keep the player character
                          //for further use.
  void setItem(Item *it); //put an item on the tile
  void setEnemy(Enemy *ec); //put an enemy on the tile
  void notifyDisplay(TextDisplay &t);
};

#endif