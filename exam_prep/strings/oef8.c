/*
What is printed?
'1  and  3'

Why?
--> it prints x of the 2 structs. But the f function increments the second element first

Which concepts are used here?
--> Pointers, structs, 
*/

struct A {
    int x;
};

void f(struct A *a) {
    a->x += 1;
}

int main() {
    struct A t[2] = {{1}, {2}};
    f(&t[1]);
    printf("%d %d\n", t[0].x, t[1].x);
}

