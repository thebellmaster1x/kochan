#include <stdio.h>

typedef struct {
    int year;
    int month;
    int day;
} DATE;

int dateDifference ( DATE past, DATE future );

int calculateN ( DATE d );
int f ( int year, int month );
int g ( int month );



int main (void) {

    DATE first, second;

    printf("Please enter two dates in YYYY-MM-DD format:\n");

    scanf("%d-%d-%d", &(first.year), &(first.month), &(first.day));
    scanf("%d-%d-%d", &(second.year), &(second.month), &(second.day));

    printf("Those dates are %d days apart.\n", dateDifference(first, second));

    return 0;

}

int dateDifference ( DATE past, DATE future ) {

    int pastN = calculateN(past);
    int futureN = calculateN(future);

    return futureN - pastN;

}

int calculateN ( DATE d ) {

    return 1461 * f(d.year, d.month) / 4 + 153 * g(d.month) / 5 + d.day;

}

int f ( int year, int month ) {

    return month <= 2 ? year - 1 : year;

}

int g ( int month ) {

    return month <= 2 ? month + 13 : month + 1;

}
