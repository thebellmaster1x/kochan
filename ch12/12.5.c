#include <stdio.h>

unsigned int bit_test (const unsigned int i, const unsigned int n);
unsigned int bit_set (const unsigned int i, const unsigned int n);

int main (void) {

                                    // 0    4    8    12   16   20   24   28
    unsigned int a = 0xf3b5ca73;    // 1111 0011 1011 0101 1100 1010 0111 0011

    printf("bit 16 is %d, bit 24 is %d\n", bit_test(a, 16), bit_test(a, 24));

    a = bit_set(a, 24);

    printf("now bit 24 is %d\n", bit_test(a, 24));

    return 0;

}

unsigned int bit_test (const unsigned int i, const unsigned int n) {

    if (i & (1 << 31 - n))
        return 1;
    else
        return 0;

}

unsigned int bit_set (const unsigned int i, const unsigned int n) {

    return i | (1 << 31 - n);

}
