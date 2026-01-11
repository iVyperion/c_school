/*
Where is s1 stored?
--> s1 is an array, so the letters are seperately stored in the array.

Where is s2 stored?
--> s2 is a pointer that points to a string literal stored in read-only storage

Which one can you modify?
--> Only s1

What happens here?
s1[0] = 'H'; // OK
s2[0] = 'H'; // UB



*/

char s1[] = "hello";
char *s2 = "hello";

