#include <stdio.h>

void schuif_links(char arr [], int n);
void schrijf(const char arr [], int n);

int main() {
  char arr[] = {'s','a','p','a','p','p','e','l'};
  int lengte = sizeof(arr)/sizeof(char);

  schuif_links(arr, lengte);
  schrijf(arr, lengte);

  printf("\n");

  schuif_links(arr, lengte);
  schrijf(arr, lengte);

  printf("\n");

  schuif_links(arr, lengte);
  schrijf(arr, lengte);

  return 0;
}

void schuif_links(char arr [], int n) {
  char first = arr[0];
  for (int i = 0; i < n; i++) {
    arr[i] = arr[i+1];
  }
  arr[n-1] = first;
}

void schrijf(const char arr [], int n) {
  for (int i = 0; i < n; i++) {
    printf("%c", arr[i]);
  }
}
