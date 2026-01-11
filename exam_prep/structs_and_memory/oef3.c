/*
Is it correct?
f1. No 
f2. Yes

Why / why not?
f1. it creates var locally in function (stack) and returns memory address but when going out of the function the original memory slot is invalid.
f2. it allocates dedicated memory on the heap instead of stack so it can be retained when exiting the function.

Who owns the memory?
f1. stack
f2. heap

Who must free it?
f1. the local function is responisble for making the memory invalid since its on the function f1's stack.'
f2. the caller has to free() it.
*/

int* f1() {
    int x = 5;
    return &x;
}

int* f2() {
    int *x = malloc(sizeof(int));
    *x = 5;
    return x;
}

