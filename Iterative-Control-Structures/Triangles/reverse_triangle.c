/*
    Programmer: Magnus Høgh             Date: 17-10-2025
    Instructor: Anders Schlichtkrull    Class: AAU Imperative Programming E25
    Write a program to print out a reversed triangle
*/


#include <stdio.h>

int main(void)
{
    int a, b;

    printf("Input height: ");
    scanf("\n %d", &a);

    b = a;

    for (int i = 0; i < a; i++, b--)
    {
        for (int l = 0; l < b - 1; l++)
        {
            printf(" ");
        }
        for (int j = 0; j < i + 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}