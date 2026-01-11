/*
For each snippet:
1. Does it produce correct output?
2. Why would this lose points on an exam?
3. Rewrite minimal corrected version
*/

int main() {
  // 1. Neje 
  // 2. Telt af van 10 naar 1. Print start na nummer 1.
  // 3. Geen if statements voor te checken of het het laatste of eerste element is. 
  //    Je kan het uit de for loop zetten. In dit geval wordt ook eerst het eerste nummer geprint voor dat start wordt geprint
    for(int i=10;i>=1;i--) {
        printf("%d ", i);
        if(i==1) printf("\nSTART"); // Geen if statements
    }
}

int main() {
  // 1. Foute output, 
  // 2. hij print 1 niet en gaat 1 getal te ver
  // 3. Print vanboven zetten in while loop, zo print hij eerst en zet hij daarna het getal goed klaar voor de volgende iteratie
    int x = 1;
    while(x < 10000) {
        x *= 2;
        printf("%d ", x);
    }
}


int main() {
  // 1. Fout
  // 2. Print 1 getal te veel. De if statement is niet goed, je bent beter van een while te gebruiken.
  // 3. Gewoon while van maken
    for(int i=0;i<20;i++) {
        printf("%d ", 1 << i);
        if((1<<i) > 10000) break;
    }
}


/////////////////////////////
void print(int t[]) {
    printf("%lu\n", sizeof(t));
}

int main() {
    int a[10];
    print(a);
    printf("%lu\n", sizeof(a));
}

/*
1. What is printed?
    t is adjusted to int * t (pointer to first element of the array) --> this prints size of a pointer
    a is an array --> this prints sizeof int * 10
2. Why?
    Arrays pass as pointers when given to a function
    It just prints the total size of the array
3. How do you fix print so it knows the size?
    Function needs to accept length for it to work. you cant calculate it in the function because its become a pointer to the first element.
    So in main just do sizeof(a) / sizeof(int)
*/
