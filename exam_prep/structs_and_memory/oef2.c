/*
What is printed?
1. 0
2. 1

Why does one function change a and the other not?
--> In the function without pointer it copies the struct by value and not by reference

Which version would you prefer and why?
--> The one with pointers, you dont make copies so it uses less resources.
*/

struct Point {
    int x;
    int y;
};

void move(struct Point p) {
    p.x += 1;
}

void move2(struct Point *p) {
    p->x += 1;
}

int main() {
    struct Point a = {0, 0};

    move(a);
    printf("%d\n", a.x);

    move2(&a);
    printf("%d\n", a.x);
}

