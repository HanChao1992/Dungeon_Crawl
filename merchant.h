#ifndef __MERCHANT_H_
#define __MERCHANT_H_

#include <string>
#include "enemy.h"

//Merchant(30HP 70ATK 5DEF)
//If player attacks one Merchant
//all merchant will become
//hostile.

class Merchant : public Enemy {
  static bool hostile; //Used for all the merchants
                       //to determine hostility
 public:
  Merchant();
  ~Merchant();
  void setHostile();
  bool getHostile();
};

#endif