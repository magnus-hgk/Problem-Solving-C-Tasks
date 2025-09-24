/*
    Programmer: Magnus Høgh             Date: 19-09-2025
    Instructor: Anders Schlichtkrull    Class: AAU Imperative Programming E25
    Write a program to estimate the amount of time it would take to cut a rectangular yard if the rate of cutting is 0.5 square meters per second
*/
#include <stdio.h>


int main(void)
{
    const double grass_cut_per_second = 0.5;
    double time_to_cut, size_of_yard, yard_length, yard_width;

    printf("Input yard width in meters: ");
    scanf("\n %lf", &yard_width);
    printf("Input yard length in meters: ");
    scanf("\n %lf", &yard_length);

    size_of_yard = yard_length * yard_width;
    time_to_cut = (size_of_yard / grass_cut_per_second);
    if (time_to_cut > 60.0)
    {
        time_to_cut /= 60.0;
        printf("Time to cut yard %.0f minutes\n", time_to_cut);
    } else {
        printf("Time to cut yard %.0f seconds\n", time_to_cut);
    }
    return 0;
}