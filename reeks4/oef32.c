#include <stdio.h>

void my_toupper(char *s);
char* alfab_kleinste(char** voornamen, int n);

int main(int argc, char *argv[]) {
    if (argc == 0) {
        printf("Jow allemaal!");
    } else {
        char* vn = alfab_kleinste(argv, argc);
        my_toupper(vn);
        printf("Jow %s\n", vn);
        /*for (int i = 0; i < argc; i++) {
            my_toupper(argv[i]);
            printf("Jow %s\n", argv[i]);
        }*/
    }

    return 0;
}

char* alfab_kleinste(char** vn, int n) {
    char* kleinste = *vn;
    for (int i = 1; i < n-1; i++) {
        if (kleinste[0] > *vn[i]) {
            kleinste = vn[i];
        }
    }
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

