/*
What is printed?
1. 6, 5 chars + '\0'
2. 5

Why are they different?
1. sizeof returns total bytes of the element
2. strleng counts characters until '\0'
sizeof measures storage size, strlen meaures string length

When do you use which?
sizeof for memory size and arrays,
strlen for string length
*/

char s[] = "hello";

printf("%lu\n", sizeof(s));
printf("%lu\n", strlen(s));

