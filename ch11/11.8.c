#include <stdio.h>

void sort3 ( int *numbers );

int main (void) {

    int numArray[3] = { 7, 1, 2 };

    sort3 ( numArray );

    for ( int i = 0; i < 3; i++ ) {

        printf( "%d\n", *(numArray + i) );

    }

    return 0;

}

void sort3 ( int *numbers ) {

    int temp;

    for ( int i = 0; i < 3; i++ ) {
        for ( int j = 0; j < 2 - i; j++ ) {

            if ( *(numbers + j) > *(numbers + j +1) ) {
                temp = *(numbers + j);
                *(numbers + j) = *(numbers + j + 1);
                *(numbers + j + 1) = temp;
            }

        }
    }

}
