/*
    Programmer: Magnus Høgh             Date: 19-09-2025
    Instructor: Anders Schlichtkrull    Class: AAU Imperative Programming E25
    Convert a temperature in degrees Fahrenheit to degrees Kelvin
*/

#include <stdio.h>
#define KELVIN_CONSTANT 273.15 

double fahrenheitToKelvin(double n)
{
    return 5.0 / 9.0 * (n - 32) + KELVIN_CONSTANT;
}


int main(void)
{

    double fahrenheit, kelvin;

    printf("Input degrees in Fahrenheit: ");
    scanf("\n %lf", &fahrenheit);

    kelvin = fahrenheitToKelvin(fahrenheit);

    printf("\n%.1f degrees Fahrenheit is %.2f degrees Kelvin\n", fahrenheit, kelvin);


    return 0;
}