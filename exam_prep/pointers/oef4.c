/*
For each line:
- what happens
- final values of p and t
*/
#include <stdio.h>

int main() {
  int t[3] = {1, 2, 3};
  int *p = t; // points to t[0]

  printf("%d\n", *p++); // parsed as *(p++) | first derefers and prints value of t[0] (1) then moves pointer to t[1]
  printf("%d\n", (*p)++); // derefers first, prints old value (2) then does t[1] + 1 = 3
  printf("%d\n", *(p++)); // same as first print | first derefers and prints (3) then moves pointer to t[2]

  return 0;
}
