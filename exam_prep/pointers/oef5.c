#include <stdio.h>

void swap(int *a, int *b);

int main() {
  int a = 4;
  int b = 1;

  printf("a: %d\n", a);
  printf("b: %d\n", b);

  swap(&a, &b);

  printf("a: %d\n", a);
  printf("b: %d\n", b);
  return 0;
}

void swap(int *a, int *b) {
  int hulp = *a;
  *a = *b;
  *b = hulp;
}

/*
why a version without pointers does not work
--> it would just change variables locally without touching the original ones that are passed.

what happens in memory
--> now it passes address to variables in main to the function,
    the function then gets the value of the a variable by derefering the pointer thats passed.
    It saves the value in a help variable. then it takes the value of b by derefering the passed pointer to it and puts it  in a.
    Then using the help variable it puts the original value of a in b.
*/
