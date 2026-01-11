#include <stdio.h>

int main() {
     for(int i=10; i>0; i--) {
          if(i==10) {
               printf("Hello world!\n"); // dit mag niet omdat je dit even goed ervoor kan zetten
          }
          printf("%d ",i);
          if(i==1) {
               printf("\nSTART"); // dit kan er even goed na staan
          }
     }
     return 0;
}
