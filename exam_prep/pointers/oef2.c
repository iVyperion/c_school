#include <stdio.h>
/*
For each line, say whether it is correct or incorrect, and why.
*/

int main() {
  int a = 5;
  int *b = a; // Wrong, you try storing the value of the var to a pointer, you need to add & to the a

  int c = 5;
  int *d = &c; // Right

  int *e;
  *e = 4; // wrong the pointer isnt hasnt been allocated memory size because its not intitiated yet. It first needs an address of another variable before you can derefer it. 

  int g;
  int *h = &g; // Works, but g is empty though. it still puts the address of g into pointer h
  *h = 4; // Now g = 4

  return 0;
}
