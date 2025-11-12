#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *lees();

int main() {
	for (int i = 0; i < 5; i++) {
		char *tekst = lees();
		printf("Ik las ***%s*** \n", tekst);
        free(tekst);
	}
	return 0;
}

char *lees() {
	char buffer[1001];
    int c;
    int len = 0;
	int too_long = 0;

    while ((c = getchar()) != '\n' && c != EOF) {
        if (len < 1000) {
            buffer[len++] = (char)c;
        } else {
            too_long = 1;
        }
    }

    buffer[len] = '\n';

    if (too_long && c != '\n' && c != EOF) {
        while ((c = getchar()) != '\n' && c != EOF)
            ;
    }

    char *tekst = malloc(len + 1);
    if (tekst == NULL) {
        fprintf(stderr, "Geheugenfout!\n");
        exit(EXIT_FAILURE);
    }

    for (int i = 0; i <= len; i++)
        tekst[i] = buffer[i];

    return tekst;

}
