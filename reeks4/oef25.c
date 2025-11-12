#include <stdio.h>
#include <stdbool.h>

int aantal_verschillende_letters(const char *s);

int main() {
    char input[31];
    
    fgets(input, 31, stdin);
    int amount = aantal_verschillende_letters(input);
    printf("Aantal verschillende letters: %d", amount);
    return 0;
}


int aantal_verschillende_letters(const char *s) {
    int occ = 0;
    bool ft[26] = {false};

    while (*s) {
        char ch = *s;
        if ('A' <= ch && ch <= 'Z') {
            ch = ch - 'A' + 'a';
        }
        if ('a' <= ch && ch <= 'z') {
            int index = ch - 'a';
            if (!ft[index]) {
                ft[index] = true;
                occ++;
            }
        }
        s++;
    }

    return occ;
}

// EXTRA: Verschillende letters inclusief hoofdletters
