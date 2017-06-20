#include <stdlib.h>
#include <stdio.h>

int main (void) {

    FILE *inputFile;
    char lineBuf[160];
    char outputString[160];
    int m, n;

    if ( (inputFile = fopen("input", "r")) == NULL) {
        printf("Couldn't open input file.\n");
        exit(1);
    }

    printf("Enter m and n: ");
    scanf("%d %d", &m, &n);

    while ( fgets(lineBuf, 160, inputFile) != NULL ) {

        for (int i = 0; i + m <= n; i++)
            outputString[i] = lineBuf[i + m - 1];

        outputString[n] = '\0';

        printf("%s\n", outputString);

    }

    fclose(inputFile);

    return 0;

}
