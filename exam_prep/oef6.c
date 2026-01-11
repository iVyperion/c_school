#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <time.h>

/* Versie 1
int main() {
  long double result = 1;
  for (int i = 2; i < 30; i++) {
    result *= i;
    printf("%d:  %Lf \n", i, result);
  }
  return 0;
}
*/

// Faculteit gaat maar tot 12e getal, dan gaat het fout (int)
// long int begint af te wijken vanaf 20e
// float begint af te wijken vanaf 14e
// double begint af te wijken vanaf 23e
// long double begint af te wijken vanaf 25e
// long long int begint af te wijken vanaf 20e 
// unsigned long long begint af te wijken vanaf 21e
// uintmax_t begint af te wijken vanaf 21e (include stdint.h)

/* Versie 3
int main() {
  srand(time(NULL));
  int upper = 20;
  int lower = 2;
  int value = rand() % (upper - lower + 1) + lower;
  long double result = 1;
  for (int i = 1; i <= value; i++) {
    result *= i;
  }
  
  printf("%d:  %Lf \n", value, result);
}
*/


int main() {
  int value;
  
  printf("geef getal tussen 2 en 20: ");
  while (scanf("%d", &value) == 0 || value < 2 || value > 20) {
    while (getchar() != '\n');
    printf("Foute input, geef getal tussen 2 en 20");
  }
  
  long double result = 1;
  for (int i = 1; i <= value; i++) {
    result *= i;
  }
  
  printf("%d:  %Lf \n", value, result);
}
