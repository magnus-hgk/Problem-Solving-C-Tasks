/*
    Programmer: Magnus Høgh             Date: 17-10-2025
    Instructor: Anders Schlichtkrull    Class: AAU Imperative Programming E25
    Write a program that calculates and compares a formula and an iterative function
*/


#include <stdio.h>


int main(void)
{
    int n, loop_method = 0, formula_method;

    printf("Input number of iterations: ");
    scanf("\n %d", &n);

    for (int i = 1; i <= n; i++)
    {
        loop_method += i;
    }

    formula_method = (n * (n + 1)) / 2;
    printf("Loop method: %d\n", loop_method);
    printf("Formula method: %d\n", formula_method);

    if (formula_method == loop_method)
    {
        printf("Both methods return the same result\n");
    } else {
        printf("Both methods do not return the same result\n");
    }

    return 0;
}