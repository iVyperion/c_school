/*
what is wrong?
--> When the function returns, the lifetime of the array ends.

how to fix (2 correct ways)
--> Dynamically allocate memory for the string. (malloc(4))
--> Use static. (static char s[]). Static variables live for the entire program
*/

char* g() {
    char s[] = "abc";
    return s;
}
