#include <assert.h>
#include "primes.h"

int isPrime(int n)
{
    int j = 0;

    if (n <= 1)
    {
        return 0;
    } else if (n == 2) {
        return 1;
    } else if (n % 2 == 0)
    {
        return 0;
    } else {

        for (int i = 1; i <= n; i++) 
        {
            if (n % i == 0)
                j++;
        }

        if (j > 2)
        {
            return 0;
        } else {
            return 1;
        } 
    }
}