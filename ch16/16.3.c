#include <stdlib.h>
#include <stdio.h>

int main (void) {

    FILE *inputFile, *outputFile;
    char c;

    if ( (inputFile = fopen("input", "r")) == NULL ) {
        printf("Cannot open input!\n");
        exit(1);
    }

    if ( (outputFile = fopen("output", "w")) == NULL ) {
        printf("Cannot open output!\n");
        exit(1);
    }

    while ( (c = getc(inputFile)) != EOF ) {

        if ( c >= 'a' && c <= 'z' )
            c -= 'a' - 'A';

        putc(c, outputFile);

    }

    fclose(inputFile);
    fclose(outputFile);

    return 0;

}
