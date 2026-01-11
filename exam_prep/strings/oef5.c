/*
What can go wrong?
--> User types in bigger word then 5 chars

Is this UB?
--> If user types in more then 5 chars, yes.

How do you fix it?
1. Limit input size with: %4s (leave 1 byte for terminating char (\0))
2. Use fgets(s, sizeof s, stdin)
*/

void f() {
    char s[5];
    scanf("%s", s);
}

