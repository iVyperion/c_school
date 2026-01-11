/*
What is wrong?
--> It returns a pointer to the array, but the array gets deleted when going out of scope.

Why is it dangerous?
--> Because the pointer refers to memory that is no longer valid, which causes undefined behavior

Fix it correctly (not hacky).
--> use memory allocation:
#include <stdlib.h>

int* makeArray(void) {
    int *t = malloc(5 * sizeof(int));
    if (t == NULL) return NULL;

    for (int i = 0; i < 5; i++)
        t[i] = i;

    return t;
}
// Caller must do:
int *a = makeArray();
free(a);
--> Let caller provide array
void makeArray(int t[], int n) {
    for (int i = 0; i < n; i++)
        t[i] = i;
}

int a[5];
makeArray(a, 5);

*/

int* makeArray() {
    int t[5];
    for(int i=0;i<5;i++) t[i] = i;
    return t;
}
