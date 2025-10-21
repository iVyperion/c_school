#include <stdio.h>

int *plaats_van(int t[], const int n, int g);
void schrijf_array(int t[], const int size);
void plaats_ptr_op_getal(int **arr, const int size, int g);

int main() {
	int arr[] = {0, 1, 2, 3, 4, 5, 6};
	int nr = 1;
	const int size = sizeof(arr) / sizeof(arr[0]);
	int *place = plaats_van(arr, size, nr);

	if (place == NULL) {
		printf("%d niet gevonden in array\n", nr);
	} else {
		printf("%d gevonden op plaats %d\n", nr, (int)(place - arr));
	}

	schrijf_array(arr, size);

	int *ptr = arr;
	plaats_ptr_op_getal(&ptr, size, ++nr);
	printf("\n");
	if (ptr == NULL) {
		printf("%d niet gevonden in array\n", nr);
	} else {
		printf("%d gevonden op plaats %d\n", nr, (int)(ptr - arr));
	}

	schrijf_array(arr, size);
	return 0;
}

int *plaats_van(int t[], const int size, int nr) {
	for (int i = 0; i < size; i++) {
		if (t[i] == nr) {
			t[i] *= 2;
			return &t[i];
		}
	}
	return NULL;
}

void schrijf_array(int t[], const int size) {
	for (int i = 0; i < size; i++) {
		printf("%d ", t[i]);
	}
}

void plaats_ptr_op_getal(int **arr, const int size, int g) {
	int i = 0;

	while (**arr != g && i < size) {
		(*arr)++;
		i++;
	}
	if (i == size) {
		*arr = NULL;
	}
}
