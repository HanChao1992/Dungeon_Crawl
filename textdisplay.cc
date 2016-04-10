#include "textdisplay.h"

using namespace std;

TextDisplay::TextDisplay() {
  for (int i = 0; i < MaxRow; i++) {
	for (int j = 0; j < MaxCol; j++) {
	  theDisplay[i][j] = ' ';
	}
  }
}

void TextDisplay::notify(int row, int col, char c) {
  theDisplay[row][col] = c;
}

TextDisplay::~TextDisplay() {}

ostream &operator<<(ostream &out, const TextDisplay &td) {
  for (int i = 0; i < MaxRow; i++) {
	for (int j = 0; j < MaxCol; j++) {
	  out << td.theDisplay[i][j];
	}
	out << "\n";
  }
  return out;
}
