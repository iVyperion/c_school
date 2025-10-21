```c
int main() {
    int i=7, j;
    double d;
    int *ip, *jp, *tp;
    double *dp;
    void *v;
    const int *p1;
    int * const p2 = &i;
    int t[5] = {10,20,30,40,50};

    /* 1*/ jp = &i; // jp = adres van i
    /* 2*/ j = *jp; // j = 7 (wijst naar waarde in jp)
    /* 3*/ *ip = i; // Fout, pointer die naar nergens wijst moogt ge niet naar dereferen
    /* 4*/ ip = jp; // ip krijgt de inhoud van jp (adres van i)
    /* 5*/ &i = ip; // Fout, je mag geen adres veranderen
    /* 6*/ (*ip)++; // ip wijst naar jp en jp wijst naar j = 7 + 1 = 8

    /* 7*/ tp = t+2; // tp verwijst naar adres van t[2]
    /* 8*/ j = &t[4] - tp; // j = adres van t4 (bv 123) - adres van tp (ookwel t2) (bv 121) = adres (123) - adres (121) = 2
    /* 9*/ t++; // Fout, je kan niks toewijzen aan t
    /*10*/ (*t)++; // t[0] + 1 = 11
    /*11*/ j = (*tp)++; // j = 30 en t[2] = 31
    /*12*/ i = *tp++; // i = 31 en tp verwijst naar t[3]

    /*13*/ v = tp++; // v = t[3] en tp verwijst nu naar  t[4]
    /*14*/ printf("%d", *v); // Fout, compileerfout vanwege onbekend type. Opl: Casten naar *(int *)
    /*15*/ v++; // Fout, grootte van void ptr is onbekend dus je kan niet zomaar adress opschuiven

    /*16*/ p1 = ip; // Juist, een int* mag je aan const int * toewijzen (wordt stricter)
    /*17*/ jp = p1; // Fout, je kan const niet minder strict maken
    /*18*/ (*p1)--; // Fout, je kan waarde van const niet aanpassen
    /*19*/ dp = &i; // Warning, het wordt best gecast naar een double
    /*20*/ dp = v; // dp = v = t[3] = 40

    /*21*/ jp = p2; // Juist, jp verwijst naar &i. inhoud van i kan veranderd worden maar jp moet altijd blijven wijzen naar i
    /*22*/ p2 = p1; // p2 is een const pointer en die mag niet opnieuw toegewezen worden (waarde wel).
    /*23*/ *p2 += i; // waarde van p2 (i) += i. dus i = 18
    return 0;
}
```
