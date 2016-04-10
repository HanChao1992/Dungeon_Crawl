#ifndef __FLOOR_H_
#define __FLOOR_H_

#include <iostream>
#include "cell.h"
#include "textdisplay.h"
#include "unreach.h"
#include "passage.h"
#include "tile.h"
#include "player.h"
#include "orc.h"
#include "dwarf.h"
#include "human.h"
#include "elves.h"
#include "enemy.h"
#include "troll.h"
#include "vampire.h"
#include "werewolf.h"
#include "item.h"
#include "potion.h"

class Floor {
  Cell *cf[MaxRow][MaxCol];
  TextDisplay *td;
  int x, y;
public:
	Floor();
	~Floor();
    void readin(); //read in a file to display the
	               //default level
	void spawnPlayer(); //spwan player at some location
	void spawnEnemy(); //spwan enmey at some location
	void spawnItem(); //spawn item at some location
	void playerMove(string s); //move the player character
	void initNeighbour(int row, int col);
	void generateCell(int row, int col, char c);
	
	friend std::ostream &operator<<(std::ostream &out, const Floor &f);
};
#endif
