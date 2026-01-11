#include <stdio.h>
int main() {
    int macht = 1; // klaazetten item
    while (macht < 10000) { // voorwaarde lus
        printf("%d ", macht); // wel herhaalde zaken die niet tot deel 4 horen 
        macht *= 2; // opnieuw klaazetten van item (kan meerder regels zijn)
    }
    return 0;
}
