#include <stdio.h>

int main (void) {

    printf("  n  tri(n)\n");
    printf("---- ------\n");

    for (int i = 5; i <= 50; i += 5) {

        printf(" %-2d   %-4d \n", i, ( ( i * (i + 1) ) / 2 ));

    }

    return 0;

}
