#include <stdio.h>

void plaats_ptr_op_string(const char * * p, char c);

int main() {
    const char *strings[5] = {
        "test",
        "testdsfgsdfg",
        "woptoirje",
        "lolpsdf",
        0
    };

    plaats_ptr_op_string(strings, 'l');

    return 0;
}


void plaats_ptr_op_string(const char * * p, char c) {

}
