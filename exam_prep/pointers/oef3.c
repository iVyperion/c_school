/*
Are all outputs equal?
--> yes

Why?
1. just prints third element of the array
2. t + 2. t is a pointer to first element of array. doing +2 on pointer moves it 2 memory spaces to the right. and then derefer it so it comes on 30.
3. same as 1, p is pointer to t[0]
4. same as 2

What is t and what is p exactly?
*/
#include <stdio.h>

int main() {
  int t[5] = {10, 20, 30, 40, 50};
  int *p = t;

  printf("%d\n", t[2]); // prints 30
  printf("%d\n", *(t+2)); // prints 30
  printf("%d\n", p[2]); // prints 30
  printf("%d\n", *(p+2)); // prints 30

  return 0;
}
