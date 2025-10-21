#include <stdio.h>
const int AFTELLEN_VAN = 100;

int main() {
    printf("Hello world!\n");
    for (int i=AFTELLEN_VAN; i>=0; i--) {
        printf("%d ", i);
    } 
    printf("\nSTART");
    return 0;
}
