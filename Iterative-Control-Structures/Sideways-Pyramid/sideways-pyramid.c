/*
    Programmer: Magnus Høgh             Date: 17-10-2025
    Instructor: Anders Schlichtkrull    Class: AAU Imperative Programming E25
    Write a program to print out a sideways pyramid that counts upwards from the left
*/

#include <stdio.h>

int main(void)
{
    int n;

    printf("Input size of pyramid: ");
    scanf("\n %d", &n);

    for (int i = 0; i <= n; i++)
    {
        for(int j = 0; j <= i; j++) 
        {
            printf("%d ", j);
        }



        printf("\n");
    }

    for (int i = n - 1; i >= 0; i--)
    {
        for(int j = 0; j <= i;j++) 
        {
            printf("%d ", j);
        }

        printf("\n");
    }

    return 0;
}