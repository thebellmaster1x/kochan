#include <stdio.h>

typedef enum {
    january = 1,
    february,
    march,
    april,
    may,
    june,
    july,
    august,
    september,
    october,
    november,
    december
} month;

char * monthName (month m);

int main (void) {

    month aMonth;

    printf("What number month do you want?\n");
    scanf("%d", &aMonth);

    printf("That's %s.\n", monthName (aMonth));

    return 0;

}

char * monthName (month m) {

    switch(m) {
        case january:
            return "January";
        case february:
            return "February";
        case march:
            return "March";
        case april:
            return "April";
        case may:
            return "May";
        case june:
            return "June";
        case july:
            return "July";
        case august:
            return "August";
        case september:
            return "September";
        case october:
            return "October";
        case november:
            return "November";
        case december:
            return "December";
        default:
            return "not a month";
    }

    return "an error";

}
