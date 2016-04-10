#include <iostream>
#include <cstdlib>
#include <fstream>
#include "floor.h"

using namespace std;

Floor::Floor() {
  td = new TextDisplay();
  for (int i = 0; i < MaxRow; i++) {
    for (int j = 0; j < MaxCol; j++) {
	  cf[i][j] = 0;
	}
  }
}

Floor::~Floor() {
  delete td;
  for (int i = 0; i < MaxRow; i++) {
    for (int j = 0; j < MaxCol; j++) {
      delete cf[i][j];
	}
  }
}

void Floor::readin() {
	ifstream infile("myfloor1.txt");
	char c;
	for (int i = 0; i < MaxRow; i++) {
		for (int j = 0; j < MaxCol; j++) {
			infile >> c;
			generateCell(i, j, c);
		}
	}
	for (int i = 0; i < MaxRow; i++) {
		for (int j = 0; j < MaxCol; j++) {
			initNeighbour(i, j);
		}
	}
	for (int i = 0; i < MaxRow; i++) {
		for (int j = 0; j < MaxCol; j++) {
			cf[i][j]->notifyDisplay(*td);
		}
	}
}

void Floor::spawnPlayer() {
	cf[4][4]->setPlayer(Player::getInstance());
	cf[4][4]->notifyDisplay(*td);
	x = 4;
	y = 4;
}

void Floor::spawnEnemy() {
	cf[4][7]->setEnemy(new Vampire());
	cf[4][7]->notifyDisplay(*td);
	cf[6][9]->setEnemy(new Werewolf());
	cf[6][9]->notifyDisplay(*td);
	cf[5][4]->setEnemy(new Troll());
	cf[5][4]->notifyDisplay(*td);
}

void Floor::spawnItem() {
	cf[5][8]->setItem(new Potion());
	cf[5][8]->notifyDisplay(*td);
}

void Floor::playerMove(string s) {
	Cell **neigh = cf[x][y]->getNeighbours();
	Cell *des;
	if (s == "nw") {
		des = neigh[0];
	}
	else if (s == "no") {
		des = neigh[1];
	}
	else if (s == "ne") {
		des = neigh[2];
	}
	else if (s == "we") {
		des = neigh[3];
	}
	else if (s == "ea") {
		des = neigh[4];
	}
	else if (s == "sw") {
		des = neigh[5];
	}
	else if (s == "so") {
		des = neigh[6];
	}
	else if (s == "se") {
		des = neigh[7];
	}
	if (des->getIcon() == '.' || des->getIcon() == '+' || des->getIcon() == '#') {
		Player *moved = cf[x][y]->removePlayer();
		cf[x][y]->notifyDisplay(*td);
		des->setPlayer(moved);
		x = des->getRow();
		y = des->getCol();
		cf[x][y]->notifyDisplay(*td);
	}
	else {
		cout << "Invalid move, please re-enter direction" << endl;
	}
}



void Floor::generateCell(int row, int col, char c) {
	if (c == '|') {
		cf[row][col] = new Unreach(row, col, '|', "vwall");
	}
	else if (c == '-') {
		cf[row][col] = new Unreach(row, col, '-', "hwall");
	}
	else if (c == 'N') {
		cf[row][col] = new Unreach(row, col, ' ', "nothing");
	}
	else if (c == '+') {
		cf[row][col] = new Passage(row, col, '+', "pluspass");
	}
	else if (c == '#') {
		cf[row][col] = new Passage(row, col, '#', "hashpass");
	}
	else if (c == '.') {
		cf[row][col] = new Tile(row, col, '.', "tile");
	}
}

void Floor::initNeighbour(int row, int col) {
	if (row > 0) {
		if (col > 0) {
			cf[row][col]->addNeighbour(0, cf[row - 1][col - 1]);
			cf[row][col]->addNeighbour(1, cf[row - 1][col]);
		}
		if (col < MaxCol - 1) {
			cf[row][col]->addNeighbour(2, cf[row - 1][col + 1]);
		}
	}
	if (col > 0) { 
		cf[row][col]->addNeighbour(3, cf[row][col - 1]); 
	}
	if (col < MaxCol - 1) { 
		cf[row][col]->addNeighbour(4, cf[row][col + 1]); 
	}
	if (row < MaxRow - 1) {
		if (col > 0) {
			cf[row][col]->addNeighbour(5, cf[row + 1][col - 1]);
			cf[row][col]->addNeighbour(6, cf[row + 1][col]);
		}
		if (col < MaxCol - 1) {
			cf[row][col]->addNeighbour(7, cf[row + 1][col + 1]);
		}
	}
}

ostream &operator<<(ostream &out, const Floor &f) {
	out << (*f.td);
	return out;
}