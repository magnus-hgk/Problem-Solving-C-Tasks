/*
    Programmer: Magnus Høgh             Date: 19-09-2025
    Instructor: Anders Schlichtkrull    Class: AAU Imperative Programming E25
    Write a program to estimate the amount of heat measured in BTU's is delivered to a housen given an efficiency
*/

#include <stdio.h>
#define EFFICIENCY 65.0
#define BARREL_GALLONS 42.0
#define BARREL_BTU 5800000.0

int main(void)
{
    double gallons_burned, btu_delivered, btu_gallon;
    btu_gallon = BARREL_BTU / BARREL_GALLONS;
    printf("Input number of gallons burned: ");
    scanf("\n %lf", &gallons_burned);

    btu_delivered = gallons_burned * btu_gallon * EFFICIENCY;

    printf("When you burn %.1f gallons of oil you produce %.2f BTU's\n", gallons_burned, btu_delivered);
    
    return 0;

}