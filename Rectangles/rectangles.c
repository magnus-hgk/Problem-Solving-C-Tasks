/*
    Programmer: Magnus Høgh             Date: 24-10-2025
    Instructor: Anders Schlichtkrull    Class: AAU Imperative Programming E25
    Write a program to calculates the area of a rectangle using a function
*/

#include <stdio.h>


double rectangleArea(double n, double m)
{
    return n * m;
}

double rectangleSideLength(double n, double m)
{
    return ((2 * n) + (2 * m));
}


void destroyBuffer()
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF) 
    {
        // discard remaining characters on the line
    }
}

int main(void)
{
    int mode, correct_input_received;
    double m = 0, n = 0;


    while (mode != 1 && mode != 2)
    {
        printf("Please input which mode you would like?\n[1] Area\n[2] Length of all sides\n");
        scanf("\n %d", &mode);
        destroyBuffer();
    }

    do {
        correct_input_received = 0;
        printf("Input side m: ");
        correct_input_received = scanf("%lf", &m);
        destroyBuffer();
    } while (!correct_input_received);
        
    do {
        correct_input_received = 0;
        printf("Input side n: ");
        correct_input_received = scanf("%lf", &n);
        destroyBuffer();
    } while (!correct_input_received);
    
    

    switch (mode)
    {
    case 1:
        printf("The area of rectangle m: %.2lf and n: %.2lf is %.2lf\n", m, n, rectangleArea(m, n));
        break;
    case 2:
        printf("The length of all sides in rectangle m: %.2lf and n: %.2lf is %.2lf\n", m, n, rectangleSideLength(m, n));
        break;
    
    default:
        break;
    }
    

    

    return 0;
}