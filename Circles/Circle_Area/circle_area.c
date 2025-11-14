/*
    Programmer: Magnus Høgh             Date: 14-09-2025
    Instructor: Anders Schlichtkrull    Class: IMPR E25
    Calculates and displays the area and circumference of a circle
 */

#include <stdio.h>
#define PI 3.14159265

int main(void)
{
    double radius, area, circumference;     // circumference not used
    int circle_number;                      // Not used
    char circle_name;                       // Not used

    printf("Input radius of circle to calculate area of circle.\nRadius: ");
    scanf("%lf",&radius);

    area = radius*radius*PI;
    printf("The area of the circle is: %f\n",area);
} 