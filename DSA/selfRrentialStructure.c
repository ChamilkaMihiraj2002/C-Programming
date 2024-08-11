#include <stdio.h>
#include <stdlib.h>

struct code
{
    int i;
    char c;
    struct code * ptr;
};


int main() {
    struct code var1 = {65, 'A', NULL};
    struct code var2 = {66, 'B', NULL};

    var1.ptr = &var2;

    printf("%d %c", var1.ptr->i, var1.ptr->c);

    return 0;
}