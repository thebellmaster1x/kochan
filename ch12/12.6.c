#include <stdio.h>

int bitpat_search (
        const unsigned int source,
        const unsigned int pattern,
        const unsigned int n);

int main (void) {

    // find
    //   11
    // in
    // 1011
    //   2
    printf("Found at index %d. Correct result: 2.\n",
            bitpat_search(0xb, 0x3, 2));

    // find
    //       110
    // in
    // 1001 0110
    //       5
    printf("Found at index %d. Correct result: 5.\n",
            bitpat_search(0x96, 0x6, 3));

    // find
    //    1 01
    // in
    // 1111 0111 0101
    //    3
    printf("Found at index %d. Correct result: 3.\n",
            bitpat_search(0xf75, 0x5, 3));

    // find nonexistent
    //      1111
    // in
    // 1001 0110 0101 1100
    //
    printf("Found at index %d. Correct result: -1.\n",
            bitpat_search(0x965c, 0xf, 4));

    // find
    // from 1011 0010
    // take        10
    // in
    // 1111 1111 1110 0001
    //             10
    printf("Found at index %d. Correct result: 10.\n",
            bitpat_search(0xffe1, 0xb2, 2));

    // find nonexistent (zeros should count!)
    // from 1011 0010
    // take      0010
    // in
    // 1111 1111 1110 0001
    //
    printf("Found at index %d. Correct result: -1.\n",
            bitpat_search(0xffe1, 0xb2, 4));

    // edge case
    // find
    //             0
    // in
    // 1111 1111 1101 1111
    //             10
    printf("Found at index %d. Correct result: 10.\n",
            bitpat_search(0xffdf, 0x0, 1));

    return 0;

}

int bitpat_search (
        const unsigned int source,
        const unsigned int pattern,
        const unsigned int n) {

    // extract last n bits of pattern
    unsigned int bitMask = ~(~0 << n);
    unsigned int maskedPattern = pattern & bitMask;

    unsigned int sourceSize = 0;

    // determine size of source by increasingly masking from right
    for( int i = 0; source & ~0 << i; i++, sourceSize++ );

    for( int i = sourceSize - n; i >= 0; i-- ) {

        // correct index is initial shift offset, minus remainder needed (i)
        // e.g. (sourceSize - n) - (sourceSize - n) = 0 -> initial bits
        //      i = 0, on the other hand -> final bits (no shift needed)

        if( maskedPattern == (source >> i & bitMask) )
            return sourceSize - n - i;

    }

    return -1;

}
