#include <stdio.h>
#include <stdbool.h>

bool array_bevat_dubbels_na_elkaar(void * t, int n, int grootte, bool (*fun)(const void*, const void*));
bool zijn_ints_gelijk(const void * a,const void * b);
bool zijn_strings_gelijk(const void * a, const void * b);

int main() {
    int getallen_ja[]   = {1,2,3,4,5,6,7,8,9,10,10,11};
    int getallen_neen[] = {1,2,1,2,1,2,1,2,1,2,3,4,5};
    char* woorden_ja[]  = {"leentje","leerde","lotje","lopen","lopen","langs","de",
                          "lindelaan"};
    char* woorden_neen[] = {"wie","goed","doet","goed","ontmoet"};

    // voor elk van deze vier arrays wordt er opgeroepen:
    if (array_bevat_dubbels_na_elkaar(getallen_ja, sizeof(getallen_ja)/sizeof(*getallen_ja), sizeof(*getallen_ja), zijn_ints_gelijk))
        printf("Deze array bevat dubbels na elkaar\n");
    else
        printf("Deze array bevat geen dubbels na elkaar\n");

    if (array_bevat_dubbels_na_elkaar(getallen_neen, sizeof(getallen_neen)/sizeof(*getallen_neen), sizeof(*getallen_neen), zijn_ints_gelijk))
        printf("Deze array bevat dubbels na elkaar\n");
    else
        printf("Deze array bevat geen dubbels na elkaar\n");

    if (array_bevat_dubbels_na_elkaar(woorden_ja, sizeof(woorden_ja)/sizeof(*woorden_ja), sizeof(*woorden_ja), zijn_strings_gelijk))
        printf("Deze array bevat dubbels na elkaar\n");
    else
        printf("Deze array bevat geen dubbels na elkaar\n");
    

    if (array_bevat_dubbels_na_elkaar(woorden_neen, sizeof(woorden_neen)/sizeof(*woorden_neen), sizeof(*woorden_neen), zijn_strings_gelijk))
        printf("Deze array bevat dubbels na elkaar\n");
    else
        printf("Deze array bevat geen dubbels na elkaar\n");

    return 0;
}


bool array_bevat_dubbels_na_elkaar(void * t, int n, int grootte, bool (*fun)(const void*, const void*)) {
    const char *ptr = t;
    for (int i = 0; i < n-1; i++) {
        if (fun(t, (t+grootte))) {
            return true;
        }
        t += grootte;
    }
    return false;
}

bool zijn_ints_gelijk(const void * a, const void * b) {
    return *(const int*)a == *(const int*)b;
}

bool zijn_strings_gelijk(const void * a, const void * b) {
    const char * c1 = *(const char* const *)a;
    const char * c2 = *(const char* const *)b;
    while (*c1 && *c2) {
        if (*c1 != *c2) {
            return false;
        }
        c1++;
        c2++;
    }
    return *c1 == *c2;
}
