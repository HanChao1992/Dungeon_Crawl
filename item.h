#ifndef __ITEM_H_
#define __ITEM_H_

#include <string>

using namespace std;

//An item can be a potion or
//treasure, for now only a
//general idea of a item(potion)
//is implemented.

class Item {
 protected:
  string name;       //Name of an item can
                     //be "potion" or "treasure"
                     //for now only "potion" is 
                     //implemented.
  Item(string name); //ctor
 public:
  string getName() const;
  virtual ~Item() = 0;
};

#endif