#include <stdio.h>

int main (void) {

    int test = ~0;
    int counter = 0;

    for( ; test ; test <<= 1, counter++);

    printf("%d bits\n", counter);

    return 0;

}
