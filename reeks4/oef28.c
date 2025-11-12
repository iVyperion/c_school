#include <ctype.h>
#include <stdio.h>

void wis(char * p);

int main() {
    char s[] = "8\td?a7!+. -)4h&!e9)b*( )j'(e)!4\n8g|'92o!43e5d/.' 2 3g*(e('d22a'(a25n'(";
    printf("%s", s);
    wis(s);
    printf("%s", s);

    printf("Geef zin:");
    char lijn[101];
    fgets(lijn, 100, stdin);
    printf("%s", lijn);
    return 0;
}

void wis(char * p) {
    char* p2 = p;
    while(*p) {
        if(islower(*p) || isspace(*p)) {
            *p2 = *p;
            p2++;
        }
        p++;
    }
    *p2 = '\0';
}
