/*
    Programmer: Magnus Høgh             Date: 24-10-2025
    Instructor: Anders Schlichtkrull    Class: AAU Imperative Programming E25
    Write a program that calculates the first n primes using a header file
*/

#include "primes.h"
#include <stdio.h>

int main(void)
{
    int n, primes_found = 0, i = 2;
    
    printf("Find the first n primes | Input n: ");
    scanf("\n %d", &n);

    while (primes_found != n){
        if (isPrime(i))
        {
            primes_found++;
            printf("prime %d: %d\n", primes_found, i);
        }
        i++;
    }
    
    return 0;

}