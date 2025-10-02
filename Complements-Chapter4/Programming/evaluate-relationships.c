/*
    Programmer: Magnus Høgh             Date: 02-10-2025
    Instructor: Anders Schlichtkrull    Class: AAU Imperative Programming E25
    Evaluate 6 relationships
*/
#include <stdio.h>

int main(void)
{
    int age, year, x, y, z, w;
    double speed, water;

    if (18 <= age && age <= 21)
    {
        printf("Age is between 18 and 21\n");
    } else {
        printf("Age is not between 18 and 21\n");
    }

    if (0.1 < water && water < 1.5)
    { 
        printf("Water is between 0.1 and 1.5\n");
    } else {
        printf("Water is not between 0.1 and 1.5\n");
    }
    
    if ((year % 4) == 0)
    {
        printf("Year is completely divisible by 4\n");
    } else {
        printf("Year is not completely divisible by 4\n");
    }

    if (!(speed > 55))
    {
        printf("Speed is lower than 55\n");
    } else {
        printf("Speed is higher than 55\n");
    }

    if (y > x && y < z)
    {
        printf("y is greater than x and z\n");
    } else {
        printf("y is not greater than x and z\n");
    }

    if (w == 6 || !(w > 3))
    {
        printf("w is either equal to 6 or not greater than 3\n");
    } else {
        printf("w is not equal to 6 and is greater than 3\n");
    }
    

}