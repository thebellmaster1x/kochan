#include <stdio.h>

int main (void) {

    int number;
    int sum;

    printf("Enter number: ");
    scanf("%i", &number);

    if ( number != 1 ) {

        while (number > 1) {

            sum += number % 10;
            number /= 10;

        }

    } else {

        sum = 1;

    }

    printf("Sum is %d\n", sum);

    return 0;

}
