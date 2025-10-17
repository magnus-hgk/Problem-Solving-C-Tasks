/*
    Programmer: Magnus Høgh             Date: 17-10-2025
    Instructor: Anders Schlichtkrull    Class: AAU Imperative Programming E25
    Write a program that calculates an increase in population and then measures how long that population will take to surpass 30.000 people
*/

#include <stdio.h>

int main(void)
{
    int population, years = 0;

    
    while (population < 10)
    {   
        printf("Input current population over 9: ");
        scanf("\n %d", &population);
    }
    

    while (population < 30000)
    {
        population *= 1.1;
        printf("After %d years the population will be %d\n", years, population);
        years++;
    }

    printf("After %d years the population will be over 30000\n", years);

    return 0;
}