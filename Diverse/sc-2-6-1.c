#include <stdio.h>

/*
    Programmer: Magnus Høgh             Date: 17-09-2025
    Instructor: Anders Schlichtkrull    Class: AAU Imperative Programming E25
    Assign blank spaces and round off numbers when using printf()
 */

int main(void)
{
    double  a = 504, 
            b = 302.558, 
            c = -12.31;

    printf("%5.0f%11.2f%9.1f\n", a, b, c);
}