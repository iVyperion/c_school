#include <stdio.h>

void schrijf(const char *, const char *);
void pivoteer(const char*, const char*, char*);

int main() {
    char tekst[] = {'b','d','?','z','g','o','e','z','e','b',
                    ' ','d','i','g','!','h','o','s','v'};
    pivoteer(tekst+7,tekst+12,tekst+9);
    schrijf(tekst + 4, tekst + 15);
	return 0;
}

void schrijf(const char *a, const char *b) {
    while (*a != *b) {
        printf("%c",*a);
        a++;
    }
}

void pivoteer(const char* begin, const char* einde, char* pivot) {
    char *links = pivot - 1;
    char *rechts = pivot + 1;

    while (links >= begin && rechts < einde) {
        char hulp = *rechts;
        *rechts = *links;
        *links = hulp;

        links--;
        rechts++;
    }
}


