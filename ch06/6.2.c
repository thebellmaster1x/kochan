#include <stdio.h>

int main (void) {

    int first, second;

    printf("Enter two numbers: ");
    scanf("%i %i", &first, &second);

    if (first % second == 0) {
        printf("Divisible!\n");
    } else {
        printf("Not divisible!\n");
    }

    return 0;

}
