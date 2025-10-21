#include <stdio.h>

void zoek_extremen(int *min, int *max,const int *arr, int size); 

int main() {
    int min, max;
    int getallen1[] = {5,7,999,6,4,2,3,8,5,-11,5,4,2};
    int getallen2[] = {-5,-2,-888,-3,-9,-4,-1,-7};

    //roep de procedure zoek_extremen aan zodat
    //het mininum en maximum van getallen1 bepaald wordt
    int size = sizeof(getallen1) / sizeof(getallen1[0]);
    zoek_extremen(&min, &max, getallen1, size);
    printf("getallen1: min is %d,  max is %d\n",min,max);

    //roep de procedure zoek_extremen aan zodat
    //het mininum en maximum van getallen2 bepaald wordt
    size = sizeof(getallen2) / sizeof(getallen2[0]);
    zoek_extremen(&min, &max, getallen2, size);
    printf("getallen2: min is %d,  max is %d\n",min,max);
    return 0;
} 

void zoek_extremen(int *min, int *max, const int *arr, int size) {
    *min = arr[0];
    *max = arr[0];
    for(int i = 0; i < size; i++) {
        *min = arr[i] < *min ? arr[i] : *min;
        *max = arr[i] > *max ? arr[i] : *max;
    }
}
