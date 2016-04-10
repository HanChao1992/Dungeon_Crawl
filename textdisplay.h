#ifndef __TEXTDISPLAY_H__
#define __TEXTDISPLAY_H__

#include <iostream>
#include <sstream>
#include <string>

using namespace std;

const int MaxRow = 25;
const int MaxCol = 79;

class TextDisplay {
  char theDisplay[MaxRow][MaxCol];
 public:
   TextDisplay(); //ctor
   void notify(int row, int col, char c); 
   ~TextDisplay();
   friend std::ostream &operator<<(std::ostream &out, const TextDisplay &td);
};

#endif
