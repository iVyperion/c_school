#include <stdio.h>

void my_toupper(char *s);

int main() {
    char s[] = "snEEuwwITJE<3!";

    my_toupper(s);
    printf("%s\n", s);
    
    char t[100];
    printf("Geef een woord: ");
    scanf("%99s", t);
    my_toupper(t);
    printf("Omgezet: %s\n", t);

    return 0;
}

void my_toupper(char *s) {
    if (*s >= 'a' && *s <= 'z') {
        *s = *s - ('a' - 'A');
    }
    s++;
    while (*s) {
        if (*s >= 'A' && *s <= 'Z') {
            *s = *s + ('a' - 'A');
        }
        s++;
    }
}
