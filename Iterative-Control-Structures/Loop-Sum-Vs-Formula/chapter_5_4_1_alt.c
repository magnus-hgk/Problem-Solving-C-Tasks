/*
    Programmer: Magnus Høgh             Date: 17-10-2025
    Instructor: Anders Schlichtkrull    Class: AAU Imperative Programming E25
    Write a program that calculates and compares a formula and an iterative function
*/

#include <stdio.h>


int main(void)
{
    int n, i = 0, formula_method;

    printf("Input number of iterations: ");
    scanf("\n %d", &n);

    formula_method = (n * (n +1)) / 2;

    while (i < formula_method)
    {
        i++;
    }

    printf("Loop method: %d\n", i);
    printf("Formula method: %d\n", formula_method);

    if (formula_method == i)
    {
        printf("Both methods return the same result\n");
    } else {
        printf("Both methods do not return the same result\n");
    }

    return 0;
}