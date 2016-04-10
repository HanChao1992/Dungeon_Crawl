#include "item.h"

using namespace std;

Item::Item(string name) : name(name){}

string Item::getName() const { 
  return name; 
}

Item::~Item() {}
