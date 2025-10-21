#include <stdio.h>
int main() {
  int macht = 1;
  for (int i = 0; i < 14; i++) {
    printf("%d ", macht);
    macht *= 2;
  }
  return 0;
}
