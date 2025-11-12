#include <stdio.h>

void my_toupper(char *s);

int main(int argc, char *argv[]) {
    for (int i = 0; i < argc; i++) {
        my_toupper(argv[i]);
        printf("Jow %s\n", argv[i]);
    }

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

