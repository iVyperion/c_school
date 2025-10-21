#include <stdio.h>
#include <time.h>

void een();

int main() {
  clock_t start, stop;
  double tijd;

  start = clock(); // starttijd meten
  een();
  stop = clock(); // stoptijd meten

  tijd = (double)(stop - start) / CLOCKS_PER_SEC;
  printf("\nTotale looptijd: %f seconden\n", tijd);

  return 0;
}

void een() {
  for (int i = 2; i <= 30000; i++) {
    int fac = 1;

    for (int j = 2; j <= i; j++) {
      fac = fac * j;
    }

    printf("%2d! = %d\n", i, fac);
  }
}
