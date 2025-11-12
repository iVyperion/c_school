#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct knoop knoop;
struct knoop {
	int getal;
	knoop *volgend;
};

void print_lijst(const knoop *k);
void voeg_vooraan_toe(int a, knoop **k);
void vernietig_lijst(knoop **k);
void verwijder_dubbels(knoop **k);
knoop* maak_gesorteerde_lijst_automatisch(int a, int b);

int main() {
	srand(time(NULL));
	knoop *l = maak_gesorteerde_lijst_automatisch(10, 100);
	print_lijst(l);
	printf("\nnu worden dubbels verwijderd: \n");
	verwijder_dubbels(&l); // aan te vullen
	printf("\nna verwijderen van dubbels: \n\n");
	print_lijst(l);
	// aan te vullen
    return 0;
}

knoop* maak_gesorteerde_lijst_automatisch(int a, int b) {
    knoop * k = NULL;
    for (int i = 0; i < a; i++) {
        voeg_vooraan_toe(a, &k);
    }
    return k;
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
