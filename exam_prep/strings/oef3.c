/*
why assignment doesn’t work
--> Arrays are not assignable.

what strcpy does
--> It copies chars from source string to destination array, including terminating '\0'.
    It assumes the destination has enough space.

why buffer size matters
--> If destination buffer is to small it will write past the size of the array. causing buffer overflow and undefined behavior
*/

char a[10];
char b[] = "test";

a = b; // No
strcopy(a, b); // OK, a is dest. b is source.
