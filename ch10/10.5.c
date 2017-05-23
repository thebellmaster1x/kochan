#include <stdio.h>

int findString (const char string[], const char search[]);

int main (void) {

    char input[41], search[41];
    int searchIndex;

    printf("Enter a string: ");
    scanf("%40s", input);

    printf("Enter a search term: ");
    scanf("%40s", search);

    searchIndex = findString(input, search);

    if (searchIndex == -1) {
        printf("Search term not found!\n");
        return 1;
    }

    printf("The search term begins at index %d.\n", searchIndex);

    return 0;

}

int findString (const char string[], const char search[]) {

    int searchIndex = 0;
    int searchingForString = 1;

    while (string[searchIndex] != '\0') {

        // initial match
        if (string[searchIndex] == search[0]) {

            searchingForString = 0;

            // reset searching status for subsequent non-matches
            for (int i = 1; search[i] != '\0'; i++)
                if (string[searchIndex + i] != search[i])
                    searchingForString = 1;

            // if we are no longer searching, the substring has been found
            if (!searchingForString)
                return searchIndex;

        }

        searchIndex++;

    }

    // if we haven't found it, return -1
    return -1;

}
