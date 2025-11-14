/*
    Programmer: Magnus Høgh             Date: 24-10-2025
    Instructor: Anders Schlichtkrull    Class: AAU Imperative Programming E25
    Write a program that calculates the biggest area of a rectangle given a max side length of x
*/

#include <stdio.h>
#define STEPSIZE 0.1


int main(void)
{
    double side_length, l, m, area, max_area = 0, i, max_side_1, max_side_2;

    const double stepsize = STEPSIZE;

    printf("Input maximum side length: ");

    scanf("\n %lf", &side_length);

    side_length /= 2;


    for (i = 0; i < side_length / stepsize; i += stepsize, side_length -= stepsize)
    {
        area = side_length * i;
        printf("%.2lf * %.2lf = %.2lf\n", side_length, i, area);

        if (area > max_area) 
        {
            max_side_1 = side_length;
            max_side_2 = i;
            max_area = area;
        }
        
    }

    printf("%lf and %lf returns the biggest area = %lf\n", max_side_1, max_side_2, max_area);

    return 0;

}