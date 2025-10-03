/*
    Programmer: Magnus Høgh             Date: 02-10-2025
    Instructor: Anders Schlichtkrull    Class: AAU Imperative Programming E25
    Write a program that takes the x–y coordinates of a point in the Cartesian
    plane and prints a message telling either an axis on which the point lies or the
    quadrant in which it is found.
*/
#include <stdio.h>

int main(void)
{

    double x, y;
    int quadrant = 0;
    char axis;

    printf("Enter coordinate x and press enter: ");
    scanf("\n %lf", &x);
    printf("Enter coordinate y and press enter: ");
    scanf("\n %lf", &y);

    if (x == 0 || y == 0)
    {   
        if (x == 0 && y == 0)
        {
            axis = 'c';
        } else if (y == 0) {
            axis = 'y';
        } else {
            axis = 'x';
        }

    } else if (x > 0 && y > 0){
        quadrant = 1;
    } else if (x > 0 && y < 0){
        quadrant = 2;
    } else if (x < 0 && y < 0){
        quadrant = 3;
    } else if (x < 0 && y > 0) {
        quadrant = 4;
    }

    if (quadrant == 0)
    {
        printf("The coordinate (%.1f, %.1f) is on the %c-axis\n", x, y, axis);
    } else {
        printf("The coordinate (%.1f, %.1f) is in quadrant %d\n", x, y, quadrant);
    }
    return 0;
}