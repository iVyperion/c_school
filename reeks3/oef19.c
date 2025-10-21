#include <stdio.h>

void schrijf_aantal(const char *, int a);
void schrijf(const char *, const char *);

int main() {
	char letters[] = {'p', 'o', 'r', 'g', 'o', 'e', 'd', 'o', 'i',
	                  'e', 'o', 'k', 'i', ':', 'a', '-', 't', '('};
	char *p = letters;
	schrijf_aantal(letters + 3, 4); // output: goed
	printf("\n");
	schrijf(p + 10, p + 12); // output: ok
	return 0;
}

void schrijf_aantal(const char *l, int a) {
	for (int i = 0; i < a; i++) {
		printf("%c", l[i]);
	}
}

void schrijf(const char *a, const char *b) {
    while (*a != *b) {
        printf("%c\n",*a);
        a++;
    }
}
