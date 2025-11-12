#include <stdio.h>

void schrijf_array(const void *t, int aantal, int grootte, char tussenteken, void (*schrijf)(const void *));
void schrijf_int(const void * p);
void schrijf_string(const void * p);
void schrijf_double(const void * p);

int main() {
    int leeftijden[] = {21, 30, 18, 14, 22, 19};
    char * namen[] = {"Evi", "Jaro", "Timen", "Youri", "Ashaf", "Jennifer"};
    double scores[] = {0.5, 1.6, 8.2, -2.4};

    int lf_size = sizeof(leeftijden)/sizeof(leeftijden[0]);
    int namen_size = sizeof(namen)/sizeof(namen[0]);
    int scores_size = sizeof(scores)/sizeof(scores[0]);

    schrijf_array(leeftijden, lf_size, sizeof(leeftijden[0]), ',', schrijf_int);
    printf("\n");
    schrijf_array(namen, namen_size, sizeof(namen[0]), ',', schrijf_string);
    printf("\n");
    schrijf_array(scores, scores_size, sizeof(scores[0]), ',', schrijf_double);
    printf("\n");

    return 0;
}

void schrijf_array(const void *t, int aantal, int grootte, char tussenteken, void (*schrijf)(const void *)) {
    const char *ptr = t;
    for(int i = 0; i < aantal-1; i++) {
        schrijf(ptr);
        ptr += grootte;
        printf("%c", tussenteken);
    }

    schrijf(t);
}

void schrijf_int(const void * p) {
    printf("%d", *(const int*)p);
}
void schrijf_string(const void * p) {
    printf("%s", *(const char* const*)p);
}
void schrijf_double(const void * p){
    printf("%lf", *(const double*)p);
}

