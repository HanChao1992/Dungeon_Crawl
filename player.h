#ifndef __PLAYER_H_
#define __PLAYER_H_
#include <string>
#include "character.h"

using namespace std;

class Player : public Character {
	static Player *instance; //singleton pattern
	static void cleanup(); //singleton pattern
protected:
	string race;
	Player(int hp, int atk, int def, string race);

public:
	static Player *getInstance(); //singleton pattern
	string getRace() const;
	virtual ~Player() = 0;
};
#endif
