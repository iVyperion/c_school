#include <stdio.h>

void schrijf_even_posities(const char[], int n);

int main() {
  char letters [] = {'p','o','r','e','o','i','f','o','i','e','c','i','i',':','a','-','t','('};
  int length = sizeof(letters) / sizeof(letters[0]);
  printf("length: %d\n", length);

  schrijf_even_posities(letters, length);
  return 0;
}

void schrijf_even_posities(const char arr[], int n) {
  for (int i = 0; i < n; i+=2) {
    printf("%c", arr[i]);
  }
}
