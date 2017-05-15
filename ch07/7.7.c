#include <stdio.h>
#define MAX 150

int main (void) {

    int primes[MAX+1];

    for (int i = 2; i <= MAX; i++)
        primes[i] = 0;

    for (int i = 2; i <= MAX; i++)
        for (int j = 2; i * j <= MAX; j++)
            primes[i*j] = 1;

    for (int i = 2; i <= MAX; i++)
        if (primes[i] == 0)
            printf("%d\n", i);

    return 0;

}
