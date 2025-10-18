/*
    Programmer: Magnus Høgh             Date: 17-10-2025
    Instructor: Anders Schlichtkrull    Class: AAU Imperative Programming E25
    Skriv et program som læser et heltal n. Programmet skal addere alle tal i intervallet fra n til 2 * n hvis n er ikke negativ. Hvis n er negativ, skal programmet addere tallene fra 2 * n til n.

    Skriv først en version med for-løkker. Dernæst en version med while løkker.

    Denne opgave stammer fra bogen C by Dissection - anvendt med tilladelse fra forlaget.
*/


#include <stdio.h>

int sumFor(int n)
{
    int count = 0;

    if (n >= 0)
    {
        for (int i = n; i < n*2; i++)
        {
            count += i;
        }
    } else {
        for (int i = 2 * n; i < n; i++)
        {
            count += i;
        }
    }
    return count;
}

int sumWhile(int n)
{
    int count = 0;
    int i;

    if (n >= 0) 
    {
        i = n;
        while (i < n * 2)
        {
            count += i;

            i++;
        }
    } else {
        i = 2 * n;
        while (i < n)
        {
            count += i;

            i++;
        }
    }
    return count;
}


int main(void)
{

    int n;


    printf("Input n:  ");
    scanf("\n %d", &n);

    printf("For the n-value %d the for loop method outputs %d\n", n, sumFor(n));
    printf("For the n-value %d the whiel loop method outputs %d\n", n, sumWhile(n));
    

}
