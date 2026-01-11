/*
What is printed?
1. 1
2. 2

Why does pp->y work?
--> It compiles to (*pp).y

Why is (*pp).y equivalent?
--> That's what the arrow does.
*/

struct Point {
    int x;
    int y;
};

int main() {
    struct Point p = {1, 2};
    struct Point *pp = &p;

    printf("%d\n", p.x);
    printf("%d\n", pp->y);
}

