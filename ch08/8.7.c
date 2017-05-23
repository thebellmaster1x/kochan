#include <stdio.h>

int x_to_the_n ( int base, int exponent );

int main (void) {

    int base, exponent;

    printf("Enter base: ");
    scanf("%d", &base);

    printf("Enter exponent: ");
    scanf("%d", &exponent);

    printf("Result is %d\n", x_to_the_n(base, exponent));

    return 0;

}

int x_to_the_n ( int base, int exponent ) {

    int result = base;

    if (exponent < 1) {
        printf("Invalid exponent!\n");
        return 0;
    }

    if (exponent == 1)
        return base;

    for (int i = 2; i <= exponent; i++)
        result *= base;

    return result;

}
