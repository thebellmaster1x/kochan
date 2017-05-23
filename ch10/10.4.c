#include <stdio.h>

void substring (const char source[], int start, int count, char result[]);

int main (void) {

    const char test[] = "character";
    char sub[20];

    int start, count;

    printf("Enter the starting index and number of characters: ");

    scanf("%d %d", &start, &count);

    substring(test, start, count, sub);

    printf("The selected substring is %s.\n", sub);

    return 0;

}

void substring (const char source[], int start, int count, char result[]) {

    int i;

    for (i = 0; i < count && source[i] != '\0'; i++)
        result[i] = source[i + start];

    result[i] = '\0';

}
