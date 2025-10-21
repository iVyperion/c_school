#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int ggd(int a, int b);
bool zijn_onderling_ondeelbaar(int a, int b);
void print_onderling_ondeelbaar(int a, int b);

int main() {
    printf("%d en %d = %d\n", -6, -8, ggd(-6, -8));
    printf("%d en %d = %d\n", 24, 18, ggd(24, 18));
    printf("%d en %d = %d\n", 0, -5, ggd(0, -5));
    printf("%d en %d = %d\n", 6, -35, ggd(6, -35));
    printf("%d en %d = %d\n", 13, 8, ggd(13, 8));
    printf("ONDERLING ONDEELBEER:");
    print_onderling_ondeelbaar(5, 8);
    return 0;
}

int ggd(int a, int b) {
    a = abs(a);
    b = abs(b);
    while(b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

bool zijn_onderling_ondeelbaar(int a, int b) {
    return (ggd(a, b) == 1);
}

void print_onderling_ondeelbaar(int a, int b) {
    for(int i = a; i <= b; i++) {
        for (int j = i+1; j <= b; j++) {
            if (zijn_onderling_ondeelbaar(i, j)) {
                printf("%d en %d zijn onderling ondeelbaar\n", i, j);
            }
        }
    }
}
