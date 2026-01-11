#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int cijfersom(int x);

int main() {
  srand(time(NULL));

  int result, num;

  for (int i = 0; i < 10; i++) {
    num = rand();
    result = cijfersom(num);
    printf("%d: %d\n", num, result);
  }

  return 0;
}

int cijfersom(int x) {
  int sum = 0;
  while (x) {
    sum += x % 10;
    x /= 10;
  }
  return sum;
}
