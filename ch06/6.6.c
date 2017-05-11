#include <stdio.h>

int main (void) {

    int number, revNumber, digit;

    revNumber = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number == 0) {
        printf("zero\n");
        return 0;
    }

    // reverse number
    do {

        revNumber *= 10;
        revNumber += number % 10;

        number /= 10;

    } while (number > 0);

    // name digits
    do {

        switch (revNumber % 10) {

            case 0:
                printf("zero ");
                break;

            case 1:
                printf("one ");
                break;

            case 2:
                printf("two ");
                break;

            case 3:
                printf("three ");
                break;

            case 4:
                printf("four ");
                break;

            case 5:
                printf("five ");
                break;

            case 6:
                printf("six ");
                break;

            case 7:
                printf("seven ");
                break;

            case 8:
                printf("eight ");
                break;

            case 9:
                printf("nine ");
                break;

        }

        revNumber /= 10;


    } while (revNumber > 0);

    printf("\n");

    return 0;

}
