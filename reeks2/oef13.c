#include <stdio.h>

void schuif_links(char t[], int n);
void schrijf(char t[], int n);

int main() {
    char t[] = {'s','a','p','a','p','p','e','l'};
	int size = sizeof(t) / sizeof(char);
	schuif_links(t, size);
	schrijf(t, size);
	schuif_links(t, size);
	schrijf(t, size);
	schuif_links(t, size);
	schrijf(t, size);

	return 0;
}

void schuif_links(char t[], int n) {
    char first = t[0];
	for (int i = 0; i < n; i++) {
		t[i] = t[i + 1];
	}
    t[n-1] = first;
}

void schrijf(char t[], int n) {
	for (int i = 0; i < n; i++) {
		printf("%c", t[i]);
	}
	printf("\n");
}
