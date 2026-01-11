#include <stdio.h>
/*
What is printed?
--> 10

Why?
--> It's passed as a pointer so the function now updates the original variable

What changes if you pass a pointer instead?
*/
void g(int *x) {
    *x = 10;
}

int main() {
    int a = 3;
    g(&a);
    printf("%d\n", a);
}

