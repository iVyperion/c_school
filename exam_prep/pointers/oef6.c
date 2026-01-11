/*
What is printed?
--> the size of the POINTER to the first element of the array (so not the amount of elements, or total size of array)

Why?
--> Because in the function t[] is actually a pointer. In the function it gives the size of the pointer

How do you fix printSize?
--> The function cant calculate the size because it only receives a pointer.
--> You can fix it by passing amount of elements and then doing n * sizeof(int)
*/
#include <stdio.h>

void printSize(int t[]) {
    printf("%lu\n", sizeof(t));
}

int main() {
    int a[10];
    printSize(a);
    printf("%lu\n", sizeof(a));
}

