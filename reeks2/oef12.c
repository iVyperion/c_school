#include <math.h>
#include <stdio.h>

const double EPSILON = 1e-9;

int index_van(double t[], int n, double g);

int main() {
    double t[] = {0.2, 1.2, 3.5, 6.5, 12.9, 8.5, 99.5, 25.8, 33.12, 54.6};
    int size = sizeof(t)/sizeof(double);
    double inputnr;
    printf("Geef een reëel getal in: ");
    while (1) {
        if (scanf("%lf", &inputnr) == 1) {
            break;
        } else {
            printf("Ongeldige invoer. Probeer opnieuw: ");
            int c;
            while ((c = getchar()) != '\n' && c != EOF);
        }
    }
    printf("%d\n", index_van(t, size, inputnr));
    return 0;
}

// t = array of nrs, n = size of array, g = number to find
int index_van(double t[], int n, double g) {
    for (int i = 0; i < n; i++) {
        if (fabs(t[i] - g) < EPSILON) {
            return i;
        }
    }
    return -1;
}

