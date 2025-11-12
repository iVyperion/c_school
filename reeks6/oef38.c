#include <stdio.h>
#include <stdlib.h>

typedef struct knoop knoop;
struct knoop {
	int getal;
	knoop *volgend;
};

void print_lijst(const knoop *k);
void voeg_vooraan_toe(int a, knoop **k);
void vernietig_lijst(knoop **k);

int main() {
	knoop *lst = NULL;
	print_lijst(lst); // output: X
	voeg_vooraan_toe(7, &lst);
	voeg_vooraan_toe(3, &lst);
	print_lijst(lst); // output: 3 7 X
	vernietig_lijst(&lst);
	print_lijst(lst); // output: X
	return 0;
}

void print_lijst(const knoop *lst) {
	while (lst) {
		printf(" %d < ", lst->getal);
		lst = lst->volgend;
	}
	printf("X\n");
}

void voeg_vooraan_toe(int a, knoop **k) {
    knoop *new = malloc(sizeof(knoop));
    if (!new) {
        perror("malloc failed");
        exit(EXIT_FAILURE);
    }

    new->getal = a;
    new->volgend = *k;
    *k = new;
}

void vernietig_lijst(knoop **k) {
    knoop *hulp;
    while (*k) {
        hulp = (*k)->volgend;
        free(*k);
        *k = hulp;
    }
}
