/*
    Programmer: Magnus Høgh             Date: 17-10-2025
    Instructor: Anders Schlichtkrull    Class: AAU Imperative Programming E25
    I denne opgave gives tre positive heltal m, n og k, hvor k er større end 1. Skriv et program der adderer alle heltal mellem m og n (begge inklusive) hvor i k går op.

    Eksempler:

    Hvis m er 5, n er 13 og k er 3 er resultatet 6 + 9 + 12 = 27.
    Hvis m er 5, n er 10 og k er 5 er resultatet 5 + 10 = 15.
    Hvis m er 10, n er 5 og k er 3 ønsker vi at resultatet er 0, idet m er større end n.
    Denne opgave stammer fra bogen C by Dissection - anvendt med tilladelse fra forlaget.
*/


#include <stdio.h>


int main(void)
{
    int m, n, k, swap, sum = 0;

    printf("Input m: ");
    scanf("\n %d", &m);

    printf("Input n: ");
    scanf("\n %d", &n);

    printf("Input k: ");
    scanf("\n %d", &k);

    if (m == n) {
        goto end;
    }

    if (m > 0 && n > 0 && k > 0) 
    {
        if (m > n) 
        {
            swap = m;
            n = swap;
            m = n;
        }

        for (int i = m; i <= n; i++)
        {
            if (i % k == 0)
            {
                printf("%d + ", i);
                sum += i;
            }
        }
    printf("= %d\n", sum);
    } else {
        end:
        printf("Some, none or some of none of the numbers inputtet are equal to or less than 0 or each other\n");
    }

    return 0;
}