#ifndef __CHARACTER_H_
#define __CHARACTER_H_

//A character can be a player character or an enmey character.
//Everyone of them has the attributes of HP, ATK, and DEF.

class Character {
 protected:
  int hp;
  int atk;
  int def;
  Character(int hp, int atk, int def);
 public:
  int getHp();
  virtual ~Character();
};

#endif