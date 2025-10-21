#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int cijfersom(int t);

int main() {
	srand(time(NULL));
    for(int i = 0; i < 10; i++) {
        int random = 0 + rand() % (100-0+1);
        printf("%d: %d\n",random, cijfersom(random));
    }
    return 0;
}

int cijfersom(int t) {
    int total = 0;
    while (t > 0) {
        total += t % 10;
        t /= 10;
    }
    return total;
}
