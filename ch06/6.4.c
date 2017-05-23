#include <stdio.h>

int main (void) {

    float accumulator = 0;

    float operand;
    char operator;

    int exitStatus = 0;

    while (!exitStatus) {

        scanf("%f %c", &operand, &operator);

        switch (operator) {

            case '+':
                accumulator += operand;
                break;

            case '-':
                accumulator -= operand;
                break;

            case '*':
                accumulator *= operand;
                break;

            case '/':
                accumulator /= operand;
                break;

            case 'S':
                accumulator = operand;
                break;

            case 'E':
                exitStatus = 1;
                break;

            default:
                printf("Unrecognized operator!\n");

        }

        printf("= %.4f\n", accumulator);

    }

    return 0;

}
