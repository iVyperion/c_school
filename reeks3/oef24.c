#include <stdio.h>
const int AANTAL = 5;

void vul_array(int a[], int b[], int c[], int amount, int fun(int a, int b));

int som(int a, int b) { return a + b; }
int product(int a, int b) { return a * b; }
int verschil(int a, int b) { return a - b; }
void schrijf(const int *t, int aantal) {
	for (int i = 0; i < aantal; i++)
		printf("%d ", t[i]);
	printf("\n");
}

int main() {
	int a[AANTAL];
	int b[AANTAL];
	int c[AANTAL];
	for (int i = 0; i < AANTAL; i++) {
		a[i] = 10 * i;
		b[i] = i;
	}

	vul_array(a, b, c, AANTAL, som);
	schrijf(c, AANTAL); // output: 0 11 22 33 44

	vul_array(a, b, c, AANTAL, product);
	schrijf(c, AANTAL); // output: 0 10 40 90 160

	vul_array(a, b, c, AANTAL, verschil);
	schrijf(c, AANTAL); // output: 0 9 18 27 36
	return 0;
}


void vul_array(int a[], int b[], int c[], int amount, int fun(int a, int b)) {
    for (int i = 0; i < amount; i++) {
        c[i] = fun(a[i], b[i]);
    }
}
