#include <stdio.h>

int main (void) {

    int curFac;

    printf("  n      n!\n");
    printf("---- ---------\n");

    for (int i = 1; i <= 10; i++) {

        curFac = 1;

        for (int j = i; j >= 1; j--) {

            curFac *= j;

        }

        printf(" %-2d   %-7d \n", i, curFac);

    }

    return 0;

}
