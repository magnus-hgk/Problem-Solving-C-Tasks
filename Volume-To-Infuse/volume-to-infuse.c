/*
    Programmer: Magnus Høgh             Date: 19-09-2025
    Instructor: Anders Schlichtkrull    Class: AAU Imperative Programming E25
    Write a program to output the amount of fluid to infuse and at which rate per hour in mL
*/

#include <stdio.h>

int main(void)
{

    double volume_to_infuse, infuse_rate, time;

    printf("Input volume to be infused in ml. : ");
    scanf("\n %lf", &volume_to_infuse);

    printf("Input amount of time to infuse in minutes: ");
    scanf("\n %lf", &time);

    infuse_rate = volume_to_infuse / (time / 60);

    printf("VTBI: %.1f\nRate: %.1f\n", volume_to_infuse, infuse_rate);
    return 0;

}