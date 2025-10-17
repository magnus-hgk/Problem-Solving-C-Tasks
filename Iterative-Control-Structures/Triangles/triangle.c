/*
    Programmer: Magnus Høgh             Date: 17-10-2025
    Instructor: Anders Schlichtkrull    Class: AAU Imperative Programming E25
    Write a program to print out a triangle
*/


#include <stdio.h>

int main(void)
{
    int a;

    printf("Input side length a and b: ");
    scanf("\n %d", &a);

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}