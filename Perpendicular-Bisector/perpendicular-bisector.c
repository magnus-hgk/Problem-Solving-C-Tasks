/*
    Programmer: Magnus Høgh             Date: 19-09-2025
    Instructor: Anders Schlichtkrull    Class: AAU Imperative Programming E25
    Write a program that outputs the equation of a perpendicular bisector for a gives set of 2 coordinates
*/
#include <stdio.h>
#include <stdlib.h>


/*Jesus fuck I don't want to comment this code right now*/

void setCoordinateSetValues(double coordinate_set[])
{
    for(int i = 0; i < 2; i++)
    {
        printf("Input coordinate %d: ", i + 1);
        scanf("\n %lf", &coordinate_set[i]);
    }
}


void printCoordinateSet(double coordinate_set[])
{
    printf("(%.1f, %.1f)", coordinate_set[0], coordinate_set[1]);
}


void midpointCoordinate(double coord1[], double coord2[], double coordmid[])
{
    for(int i = 0; i<  2; i++)
    {
    coordmid[i] = (coord1[i] + coord2[i]) / 2;
    }
}

int main(void)
{

    double coordinate_set_1[2], coordinate_set_2[2], coordinate_set_midpoint[2], normal_vector[2];
    double slope, normal_slope;
    
    setCoordinateSetValues(coordinate_set_1);
    setCoordinateSetValues(coordinate_set_2);

    slope = (coordinate_set_2[1] - coordinate_set_1[1]) / (coordinate_set_2[0] - coordinate_set_1[0]);


    printf("The line slope between the coordinates are %.2f\n", slope);

    midpointCoordinate(coordinate_set_1,coordinate_set_2, coordinate_set_midpoint);

    printf("The midpoint coordinate set is: ");
    printCoordinateSet(coordinate_set_midpoint);

    
    


    if (slope == 0)
    {
        printf("\nThe slope is 0 so the're is no y intercept\n");
        return 0;
    } else {
    normal_slope = -1/slope;
    printf("\nThe slope of the perpendicular bisector is: %.1f\n", normal_slope);

    normal_vector[1] = coordinate_set_midpoint[1] - normal_slope * coordinate_set_midpoint[0];
    normal_vector[0] = 0;
    printf("The intersection with the y-axis is at (%.1f, %.1f)\n", normal_vector[0], normal_vector[1]);
    printf("The original points were: ");
    printCoordinateSet(coordinate_set_1);
    printf(" and ");
    printCoordinateSet(coordinate_set_2);
    
    printf("\nThe formula for their perpendicular bisector is y = %.2fx + %.2f\n", normal_slope, normal_vector[1]);

    }
    return 0;
}