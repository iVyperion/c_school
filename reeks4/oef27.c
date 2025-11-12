#include <stdio.h>

void schrijf(const char *a, const char *b);
const char* pointerNaarEersteKleineLetter(const char p[]);
void verzetNaarEersteHoofdletter(const char **p);

int main() {
    char zus1[50] = "sneeuwWITje";
    char zus2[50] = "rozeROOD";
    const char *begin = zus1;
    verzetNaarEersteHoofdletter(&begin);
    const char *eind = pointerNaarEersteKleineLetter(begin);
    schrijf(begin,eind);   /* schrijft 'WIT' uit */
    printf("\n");
    begin = zus2;
    verzetNaarEersteHoofdletter(&begin);
    eind = pointerNaarEersteKleineLetter(begin);
    schrijf(begin,eind);   /* schrijft 'ROOD' uit */
    return 0;
}

void schrijf(const char *a, const char *b) {
    while (*a != *b) {
        printf("%c",*a);
        a++;
    }
}

const char* pointerNaarEersteKleineLetter(const char p[]) {
    while (*p) {
        if (*p >= 'a' && *p <= 'z') {
            return p;
        }
        p++;
    }
    return p;
}

void verzetNaarEersteHoofdletter(const char **p) {
    while(**p && (**p < 'A' || **p > 'Z')) {
         (*p)++;
    }
}
