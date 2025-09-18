#include<stdio.h>

/*
    Programmer: Magnus Høgh             Date: 17-09-2025
    Instructor: Anders Schlichtkrull    Class: AAU Imperative Programming E25
    Calculate and print the area of a square by a given side length
 */

int main(void)
{

    double side_length, area;                           // Define variables to be used in the scope
    
    printf("Input side length of square: \n");          // Prompt user to input side length of the square
    scanf("%lf",&side_length);                          // Receive side length as input and store it in side_length
    
    area = side_length*side_length;                     // Assign the area of the sqaure to the area variable
    
    printf("\nThe area of a square with a side length of %f is: %f\n", side_length, area);   // Print the result
    return 0;   // Exit program
}