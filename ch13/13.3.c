#include <stdio.h>

#define MIN(a,b) ( a < b ? a : b )

int main (void) {

    int first, second;

    printf("enter two values:\n");

    scanf("%d", &first);
    scanf("%d", &second);

    printf("minimum value is %d\n", MIN (first, second));

    return 0;

}
