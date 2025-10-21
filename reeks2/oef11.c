#include <stdio.h>

void schrijf_even_posities(char t[], int size);

int main() {
	char letters[] = {'p', 'o', 'r', 'e', 'o', 'i', 'f', 'o', 'i',
	                  'e', 'c', 'i', 'i', ':', 'a', '-', 't', '('};
	int size = sizeof(letters) / sizeof(char);
	printf("# karakters in array: %d\n", size);

    schrijf_even_posities(letters, size);
	return 0;
}

void schrijf_even_posities(char t[], int size) {
	for (int i = 0; i < size; i += 2) {
		printf("%c", t[i]);
	}
}
