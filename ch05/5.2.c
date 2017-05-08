#include <stdio.h>

int main (void) {

    printf("  n   n2  \n");
    printf("---- ---- \n");

    for (int i = 1; i <= 10; i++) {

        printf(" %-2d   %d  \n", i, i * i);

    }

    return 0;

}
