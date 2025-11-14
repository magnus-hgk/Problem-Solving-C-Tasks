#include<stdio.h>
#define KMS_PER_MILE 1.609

/*
    Programmer: Magnus Høgh             Date: 17-09-2025
    Instructor: Anders Schlichtkrull    Class: AAU Imperative Programming E25
    Convert given miles to kilometres
 */

int main(void)
{
    double miles, kms;
    
    printf("Input number of miles: \n");
    scanf("%lf", &miles);

    kms = KMS_PER_MILE * miles;

    printf("%lf miles is %lf kilometres\n",miles,kms);
    return (0);

}