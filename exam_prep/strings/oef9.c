/*
explain every problem
--> The function doesnt allocate memory so when returning the lifetime of the int ends.
--> The input doesnt get validated so the user can put in a string.

rewrite design correctly


*/

int* readArray() {
    int n;
    scanf("%d", &n);
    int t[n];
    return t;
}

// correct
int* readArray() {
    int n;
    while (scanf("%d", &n) == '' || n < 1);
    int t[] malloc(sizeof *t * n);
    return t;
}

