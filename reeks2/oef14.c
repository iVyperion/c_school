#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int main() {
    srand(time(NULL));
    const int MIN = 100;
    const int MAX = 125;
    const int AMOUNT = 20;
    int t[AMOUNT];
    int present[MAX - MIN + 1];

    printf("Generated numbers:\n");
    for (int i = 0; i < AMOUNT; i++) {
        t[i] = rand() % (120 - 100 + 1) + 100;
        printf("%d ", t[i]);
        present[t[i]-100] = 1; 
    }

    printf("\n Missing numbers:\n");
    for (int i = 0; i <= AMOUNT; i++) {
        if (!present[i]){
            printf("%d ", i+100);
        }
    }
}
