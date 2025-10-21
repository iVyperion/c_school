#include <stdio.h>

void lees_input(int freq[]);
void teken_horizontaal(int freq[]);
void teken_verticaal(int freq[]);
void clear_buffer();
void horizontal_histogram(int freq[], int size);

int main() {
    int freq[26] = {0};
    lees_input(freq);
    int size = sizeof(freq)/sizeof(int);
    horizontal_histogram(freq, size);
    
    return 0;
}

void lees_input(int freq[]) {
    char c;

    printf("Geef letters in (stop met $):");
    while (scanf("%c", &c) == 1 && c != '$') {
        if (c >= 'A' && c <= 'Z') {
            freq[c - 'A']++;
        } else if (c >= 'a' && c <= 'z') {
            freq[c - 'a']++;
        }
    }
}

void horizontal_histogram(int freq[], int size) {
    char first_letter = 'a';
    for(int i = 0; i < size; i++) {
        if(freq[i] > 0){
            printf("%c:\t", first_letter + i);
            for(int j = 0; j < freq[i]; j++){
                printf("*");
            }
            printf("\n");
        }
    }
}

void clear_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}
