#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int ggd(int a, int b);
bool zijn_onderling_deelbaar(int a, int b);
void print_onderling_ondeelbaar(int a, int b);

int main() {
    printf("ggd(-6,-8) = %d (2)\n", ggd(-6, -8));
    printf("ggd(24,18) = %d (6)\n", ggd(24, 18));
    printf("ggd(0,-5) = %d (5)\n", ggd(0, -5));
    printf("ggd(6,-35) = %d (1)\n", ggd(6, -35));

    print_onderling_ondeelbaar(5, 8);
  return 0;
}

int ggd(int a, int b) {
  if (a < 0 || b < 0) {
    return ggd(abs(b), abs(a) % abs(b));
  }
  if (b == 0)
    return a;
  return ggd(b, a % b);
}

bool zijn_onderling_deelbaar(int a, int b) {
  return ggd(a, b) == 1;
}

void print_onderling_ondeelbaar(int a, int b) {
  for (int i = a; i < b; i++) {
    for (int j = i+1; j <= b; j++) {
      if (zijn_onderling_deelbaar(i, j)) {
        printf("%d en %d zijn onderling deelbaar\n", i, j);
      }
    }
  }
}
