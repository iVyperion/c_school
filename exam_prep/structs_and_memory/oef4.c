/*
Is this undefined behavior?
--> No its a memory leak.

Is it a memory leak?
--> yes

Why is this dangerous in long-running programs?
--> Every time the function is called memory is allocated.
    So after a long time it's gonna use up a lot of memory.
*/

void g() {
    int *p = malloc(10 * sizeof(int));
}

