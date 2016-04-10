#include <string>
#include "unreach.h"


using namespace std;


Unreach::Unreach(int row, int col, char icon, string name) : Cell(row, col, icon, name){
	neighbours = new Cell *[maxNeighbours];
	for (int i = 0; i < maxNeighbours; i++) {
		neighbours[i] = 0;
	}
	if (name == "vwall") {
		icon = '|';
	}
	else if (name == "hwall") {
		icon = '-';
	}
	else if (name == "nothing") {
		icon = ' ';
	}
}

Unreach::~Unreach() {}

void Unreach::notifyDisplay(TextDisplay &t) {
	t.notify(row, col, icon);
}