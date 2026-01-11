/*
Why this is wrong
--> There is no space for the terminator '\0'

What memory is overwritten
--> The null termniator cannot be stored, so its not a valid C string

Why this is dangerous
--> Because the lack of terminator, any string operation will read past the end of the string. Causing Undefined behavior
*/

char s[5] = "hello";

