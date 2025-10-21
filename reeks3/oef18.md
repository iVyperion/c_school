#include <stdio.h>

'''c
void wissel(int a, int b) {
     printf("  Bij start van de wisselprocedure hebben we a=%d en b=%d.\n",a,b);
     int hulp = a;
     a = b;
     b = hulp;
     printf("  Op het einde van de wisselprocedure hebben we a=%d en b=%d.\n",a,b);
}

int main() {
    int x = 5;
    int y = 10;
    printf("Eerst hebben we x=%d en y=%d.\n",x,y);
    wissel(x,y);
    printf("Na de wissel hebben we x=%d en y=%d.\n",x,y);
    return 0;
}
'''

# Antwoord
Eerst hebben we x = 5 en y = 10

bij start van wisselprocedure hebben we a = 5 en b = 10

Op het einde van wisselprocedure hebben we a = 10 en b = 5 

Na de wissel hebben we x = 5 en y = 10
