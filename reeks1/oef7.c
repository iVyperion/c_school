#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

long double iterative_faculty(int e);
long double power(long double base, int power);
long double sinus(long double radial);

int main() {
    srand(time(NULL));
	double x = ((double)rand() / RAND_MAX) * (3.2 - (-3.2)) - 3.2;
	printf("Random num: %f\n", x);
	printf("%Lf\n", sinus(0.23));
	printf("%f\n", sin(0.23));
	printf("%Lf\n", sinus(8.2));
	printf("%f\n", sin(8.2));
	return 0;
}

long double sinus(long double radial) {
	double result = 0.0;
	int i = 0;
	long double term;
	do {
		term = (power(-1, i) / iterative_faculty(2 * i + 1)) *
		       power(radial, (2 * i + 1));
		result += term;
		i++;
	} while (fabsl(term) > 1e-16);
	return result;
}

long double iterative_faculty(int e) {
	long double result = 1;
	for (int i = 2; i <= e; i++) {
		result *= i;
	}
	return result;
}

long double power(long double base, int power) {
	double result = 1.0;
	for (int i = 1; i <= power; i++) {
		result *= base;
	}
	return result;
}
