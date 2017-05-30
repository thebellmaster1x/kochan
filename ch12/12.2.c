#include <stdio.h>

int main (void) {

    unsigned int a = 0xffffffff;
    a >>= 1;

    if ( (signed int) a < 0 )
        printf("arithmetic\n");
    else
        printf("logical\n");

    printf("a: %d | ua: %u\n", a, a);

    return 0;

}
