/*
what is allowed?

what is forbidden?
*/

const int *p; // allowed, the value in the pointer cant be changed. the pointer itself can.
int * const q; // allowed the pointer cant be changed. the value can | const pointer has to be initialized on creation
const int * const r; // pointer and value cant be chagend

*p = 5; // not allowed. you cant change value because its a conts
p = &x; // allowed, pointer can be changed
