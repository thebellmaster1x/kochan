#include <stdio.h>

#define MAX(a,b) ( a > b ? a : b )
#define MAX3(a,b,c) ( MAX ( MAX ( a, b ), c ) )

int main (void) {

    int first, second, third;

    printf("enter three numbers: ");
    scanf("%d %d %d", &first, &second, &third);

    printf("maximum is %d\n", MAX3 (first, second, third) );

    return 0;

}
