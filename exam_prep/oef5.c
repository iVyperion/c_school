#include <stdio.h>
int main() {
    int macht = 1;
    for (int i=0; i<20; i++) {
        printf("%d ",macht);
        macht *= 2;
        if (macht > 10000) // onnodig aantal keer for lus oproepen. Early returns/breaks zo veel mogelijk vermijden
            break;
    }
    return 0;
}

/*
 * Als je for lus gebruikt weet je meestal hoeveel keer dat je wilt loopen op voorhand, weet je dat niet is het bijna altijd beter om while te gebruiken.
 * */
