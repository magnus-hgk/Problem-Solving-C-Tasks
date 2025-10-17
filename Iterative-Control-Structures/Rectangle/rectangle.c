/*
    Programmer: Magnus Høgh             Date: 17-10-2025
    Instructor: Anders Schlichtkrull    Class: AAU Imperative Programming E25
    Write a program to print out a rectangle
*/


#include <stdio.h>

int main(void)
{
    int a, b;

    printf("Input side length a and b: ");
    scanf("\n %d %d", &a, &b);

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}