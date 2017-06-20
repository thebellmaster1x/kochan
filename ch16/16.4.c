#include <stdlib.h>
#include <stdio.h>

int main (void) {

    FILE *inputFile1, *inputFile2, *outputFile;
    char lineBuf1[160] = {0};
    char lineBuf2[160] = {0};



    if ( (inputFile1 = fopen("input1", "r")) == NULL ) {
        printf("Cannot open input1!\n");
        exit(1);
    }

    if ( (inputFile2 = fopen("input2", "r")) == NULL ) {
        printf("Cannot open input2!\n");
        exit(1);
    }

    if ( (outputFile = fopen("output", "w")) == NULL ) {
        printf("Cannot open output!\n");
        exit(1);
    }



    while (1) {

        fscanf(inputFile1, "%[^\n]\n", lineBuf1);
        fscanf(inputFile2, "%[^\n]\n", lineBuf2);

        fprintf(outputFile, "%s\n", lineBuf1);
        fprintf(outputFile, "%s\n", lineBuf2);

        if ( feof(inputFile1) || feof(inputFile2) )
            break;

    }

    while ( ! feof(inputFile1) ) {
        fscanf(inputFile1, "%[^\n]\n", lineBuf1);
        printf("%s\n", lineBuf1);
    }

    while ( ! feof(inputFile2) ) {
        fscanf(inputFile2, "%[^\n]\n", lineBuf2);
        printf("%s\n", lineBuf2);
    }

    fclose(inputFile1);
    fclose(inputFile2);
    fclose(outputFile);

    return 0;

}
