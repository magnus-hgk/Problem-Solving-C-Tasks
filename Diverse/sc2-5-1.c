#include <stdio.h>

/*
    Programmer: Magnus Høgh             Date: 17-09-2025
    Instructor: Anders Schlichtkrull    Class: AAU Imperative Programming E25
    Format a given formula in C take not of order of operations both implicit and assigned with ()
 */

int main(void)
{
    double q, k, a, t_1, t_2, l;

    k = 1;
    a = 2;
    t_1 = 3;
    t_2 = 4;
    l = 5;

    q = (a * k * (t_2 - t_1)) / l;

    printf("%f\n",q);

}