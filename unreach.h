#ifndef __Unreach_H_
#define __Unreach_H_

#include <string>
#include "cell.h"

using namespace std;

//Places that nothign can reach
//including walls '|' '-", and 
//blank cells ' '
class Unreach : public Cell {
 public:
  Unreach(int row, int col, char icon, string name);
  ~Unreach();
  void notifyDisplay(TextDisplay &t);
};

#endif