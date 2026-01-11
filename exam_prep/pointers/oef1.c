#include <stdio.h>
/*
What is printed?
-> 3

Why?
--> it get's passed by value not by reference

What changes if you pass a pointer instead?
--> it will print 10, because it updates the original variable
*/

void f(int x) {
    x = 10;
}

int main() {
    int a = 3;
    f(a);
    printf("%d\n", a);
}


