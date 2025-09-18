#include<stdio.h>
#define MILES_PER_KM 0.621504

/*
    Programmer: Magnus Høgh             Date: 17-09-2025
    Instructor: Anders Schlichtkrull    Class: AAU Imperative Programming E25
    Convert given kilometres to miles
 */

int main(void)
{

    double miles, kms;
    
    printf("Input number of kilometres: \n");
    scanf("%lf", &kms);

    miles = MILES_PER_KM * kms;

    printf("%lf kilometres is %lf miles\n",kms,miles);
    
    return (0);

}