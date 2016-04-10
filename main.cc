#include <iostream>
#include <cstdlib>
#include <sstream>
#include <fstream>

#include "floor.h"

using namespace std;


int main(int argc, char *argv[]) {

	cout << "|-----  |     | |-----| |-----| |-----| |----- |-----|" << endl;
	cout << "|       |     | |     | |  |  | |     | |      |     |" << endl;
	cout << "|       |-----| |-----| |  |  | |-----| |----- |-----|" << endl;
	cout << "|       |     | |     | |  |  | |     | |      |    \\" << endl;
	cout << "|-----  |     | |     | |  |  | |-----| |----- |     \\" << endl;
	cout << endl;
	cout << "|-----  |-----| |-----| |  |  | |       |----- |-----|" << endl;
	cout << "|       |     | |     | |  |  | |       |      |     |" << endl;
	cout << "|       |-----| |-----| |  |  | |       |----- |-----|" << endl;
	cout << "|       |    \\"  <<"  |     | |  |  | |       |      |    \\" << endl;
	cout << "|-----  |     \\" <<" |     | |-----| |-----  |----- |     \\" << endl;
	cout << "           Presented by Cloudero Entertainment" << endl;
	cout << "             -----| |-----| |-----| |-----|" << endl;
	cout << "                  | |     | |     | |     |" << endl;
	cout << "             -----| |     | |     | |     |" << endl;
	cout << "                  | |     | |     | |     |" << endl;
	cout << "             -----| |-----| |-----| |-----|" << endl;
	cout << "             Press s to begin your adventure" << endl;
	char c;
	while (cin >> c) {
		if (c != 's') {
			cout << "Please press s to start the game!" << endl;
		}
		else {
			break;
		}
	}
	cout << endl << endl;
	cout << " /------\\" << " " << endl;
	cout << " | @  @ |" << endl;
	cout << " |  __  |" << endl;
	cout << " |______|" << endl;
	cout << "What is this? ahhhhhhhhhhhhh" << endl;
	cout << "press c to close your eyes." << endl;
	char c1;
	while (cin >> c1) {
		if (c1 != 'c') {
			cout << "ClOSE YOUR EYES! FOR I WILL NOT HARM YOU." << endl;
		}
		else {
			break;
		}
	}
	cout << endl << endl;
	cout << "Unknow voice: I am lihx, the God of Chamber. Tell me, mortal." << endl;
	cout << "What is that you SEEK?" << endl;
	cout << "You have no idea? Let me show you." << endl;
	cout << "Press d for Wealth" << endl;
	cout << "Press o for Bruatliy" << endl;
	cout << "Press e for Agility" << endl;
	cout << "Press h for being yourself" << endl;
	Player *pc;
	char c2;
	while (cin >> c2) {
		cout << endl << endl;
		if (c2 == 'd') {
			cout << "You are about to become a dwarf." << endl;
			cout << "HP:100 ATK:20 DEF:30" << endl;
			cout << "Gold is doubled in value for you" << endl;
			cout << "Press y to confirm" << endl;
			char c3;
			while (cin >> c3) {
				cout << endl << endl;
				if (c3 != 'y') {
					cout << "There is no turning back." << endl;
			    }
				else {
					cout << "Good luck, Master Dwarf." << endl;
					pc = new Dwarf();
					break;
				}
			}
			break;
		}
		else if (c2 == 'o') {
			cout << "You are about to become an orc." << endl;
			cout << "HP:180 ATK:30 DEF:25" << endl;
			cout << "Gold is worth half value for you" << endl;
			cout << "Press y to confirm" << endl;
			char c3;
			while (cin >> c3) {
				cout << endl << endl;
				if (c3 != 'y') {
					cout << "There is no turning back." << endl;
				}
				else {
					cout << "Good luck, Beast." << endl;
					pc = new Orc();
					break;
				}
			}
			break;
		}
		else if (c2 == 'e') {
			cout << "You are about to become an elf." << endl;
			cout << "HP:140 ATK:30 DEF:10" << endl;
			cout << "Negative potions has positive effect for you" << endl;
			cout << "Press y to confirm" << endl;
			char c3;
			while (cin >> c3) {
				cout << endl << endl;
				if (c3 != 'y') {
					cout << "There is no turning back." << endl;
				}
				else {
					cout << "Good luck, Pointy-ears." << endl;
					pc = new Elves();
					break;
				}
			}
			break;
		}
		else if (c2 == 'h') {
			cout << "You are about to become yourself." << endl;
			cout << "HP:140 ATK:20 DEF:20" << endl;
			cout << "You are a human." << endl;
			cout << "Press y to confirm" << endl;
			char c3;
			while (cin >> c3) {
				cout << endl << endl;
				if (c3 != 'y') {
					cout << "There is no turning back." << endl;
				}
				else {
					cout << "Good luck, Human." << endl;
					pc = new Human();
					break;
				}
			}
			break;
		}
		else {
			cout << "Please press d, o, h or e." << endl;
		}
	}
	Floor *f;
	f = new Floor();
	f->readin();
	f->spawnPlayer();
	f->spawnEnemy();
	f->spawnItem();
	cout << (*f);
	string s;
	while (cin >> s) {
		f->playerMove(s);
		cout << (*f);
	}
	delete pc;
	delete f;
}