#include <stdio.h>

int main (void) {

    float numbers[10];
    float average = 0;

    printf("Enter 10 values:\n");

    for (int i = 0; i < 10; i++) {

        scanf("%f", &numbers[i]);

    }

    for (int i = 0; i < 10; i++) {

        average += numbers[i];

    }

    average /= 10;

    printf("Average is %f\n", average);

    return 0;

}
