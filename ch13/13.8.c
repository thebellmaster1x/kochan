#include <stdio.h>

#define IS_LOWER_CASE(x)    ( ((x) >= 'a') && ((x) <= 'z') )
#define IS_UPPER_CASE(x)    ( ((x) >= 'A') && ((x) <= 'Z') )
#define IS_DIGIT(x)         ( ((x) >= '0') && ((x) <= '9') )

#define IS_SPECIAL(x)       ( ((IS_LOWER_CASE (x)) || \
                               (IS_UPPER_CASE (x)) || \
                               (IS_DIGIT      (x))  ) \
                                            ? 0 : 1 )

int main (void) {

    char testChar;

    scanf("%c", &testChar);

    if (IS_SPECIAL (testChar))
        printf("special character\n");
    else 
        printf("alphanumeric character\n");

    return 0;

}
