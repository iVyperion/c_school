#include <stdio.h>

int recursive_faculty(int e);
long double iterative_faculty(int e);

int main() {
    int x;

    printf("Enter number between 2 and 20:");
    while (scanf("%d", &x) != 1 || x < 2 || x > 20) {
        int c;
        while ((c = getchar()) != '\n' && c != EOF);
        printf("Enter number between 2 and 20:");
    }
    for (int i = 2; i <=x; i++) {
        long double res;
        res = iterative_faculty(i);
        printf("Faculteit van %d: %Lf\n", i, res);
    }
    return 0;
}

int recursive_faculty(int e) {
    if (e == 0) {
        return 1;
    }
    return e * recursive_faculty(e-1);
}


// 6.2 --> long long int  tot 20!
// 6.2 --> long double tot 100! en mogelijks meer
long double iterative_faculty(int e) {
    long double result = 1;
    for (int i = 2; i <= e; i++){
        result *= i;
    }
    return result;
}
