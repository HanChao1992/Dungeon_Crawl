#ifndef __ENEMY_H_
#define __ENEMY_H_

#include <string>
#include "character.h"

using namespace std;


//There are total 6 types of enemy including vampire(V), werewolf(W),
//goblin(N),troll(T), merchant(M), and dragon(D)


class Enemy : public Character {
 protected:
  string type;       //can be one of the following
                     //"vampire","werewolf","troll","goblin",
                     //"phoenix", "merchant", "dragon"
  Enemy(int hp, int atk, int def, string type); //ctor
 public:
  string getType() const;
  virtual void setHostile(); //Merchant and Dragon
                             //are not hostile to
                             //the player character
                             //initially
  virtual bool getHostile(); //Determine if Merchant
                             //and Dragon are hostile
                             //now
  virtual ~Enemy() = 0;
};

#endif




