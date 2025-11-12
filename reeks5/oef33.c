#include <math.h>
#include <stdio.h>

typedef struct point {
	double x, y;
} point;

double bereken_euclidische_afstand(const point *a, const point *b);
double bereken_manhatten_afstand(const point *a, const point *b);
double bereken_chebyshev_afstand(const point *a, const point *b);
double bepaal_max_afstand(const point *points, int amount,
                          double (*fun)(const point *a, const point *b));

int main(int argc, char *argv[]) {
	int amount;
	printf("Hoeveel punten?");
	scanf("%d", &amount);
	point points[amount];
	int max_euclidisch, max_manhatten, max_chebyshev;

	for (int i = 0; i < amount; i++) {
		printf("Punt %d x:", i);
		scanf("%lf", &points[i].x);
		printf("Punt %d y:", i);
		scanf("%lf", &points[i].y);
	}

	double dist_euclidisch =
	    bepaal_max_afstand(points, amount, bereken_euclidische_afstand);
	double dist_manhatten =
	    bepaal_max_afstand(points, amount, bereken_manhatten_afstand);
	double dist_chebyshev =
	    bepaal_max_afstand(points, amount, bereken_chebyshev_afstand);

	printf("euclidisch %lf\n", dist_euclidisch);
	printf("manhatten %lf\n", dist_manhatten);
	printf("chebyshev %lf\n", dist_chebyshev);

	return 0;
}

double bereken_euclidische_afstand(const point *a, const point *b) {
	return sqrt(pow(b->x - a->x, 2) + pow(b->y - a->y, 2));
}
double bereken_manhatten_afstand(const point *a, const point *b) {
	return fabs(b->x - a->x) + fabs(b->y - a->y);
}
double bereken_chebyshev_afstand(const point *a, const point *b) {
	return fmax(fabs(b->x - a->x), fabs(b->y - a->y));
}

double bepaal_max_afstand(const point *points, int amount,
                          double (*fun)(const point *a, const point *b)) {
	double max = 0;
	for (int i = 0; i < amount; i++) {
		for (int j = 0; j < amount; j++) {
			double help = fun(&points[i], &points[j]);
			if (help > max) {
				max = help;
			}
		}
	}
	return max;
}
