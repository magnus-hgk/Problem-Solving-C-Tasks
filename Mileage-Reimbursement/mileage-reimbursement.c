/*
    Programmer: Magnus Høgh             Date: 18-09-2025
    Instructor: Anders Schlichtkrull    Class: AAU Imperative Programming E25
    A program that functions to calculate the dollar reimbursement pr. mile driven
*/

#include <stdio.h>
#define DOLLARS_PER_MILE 0.35 // How many dollars per mile to reimburse

int main(void)
{
    double dollars_reimbursed, start_odometer_reading, end_odometer_reading, miles_driven; // Define all variables as double because we're working with semi-large floating point numbers
    printf("Enter odometer reading at start of journey and press enter: ");  // Prompt for user input
    scanf("\n %lf",&start_odometer_reading);  // Cast user input to start_odometer_reading and ignore blank spaces

    printf("Enter odometer reading at end of journey and press enter: ");  // Prompt for user input
    scanf("\n %lf", &end_odometer_reading);  // Cast user input to end_odometer_reading and ignore blank spaces

    miles_driven = end_odometer_reading - start_odometer_reading; // Calculate and assign value to miles driven calculated by taking the end reading on the odometer and subtracting the start reading on the odometer
    dollars_reimbursed = miles_driven * DOLLARS_PER_MILE;  // Calculate and assign $dollars reimbursed to the variable reimbursed

    printf("\nStart odometer reading: %.1f\nEnd odometer reading: %.1f\nMiles driven: %.1f\n\nAt a rate of %.2f$ per mile. Dollars reimbursed: %.2f$\n", start_odometer_reading, end_odometer_reading, miles_driven, DOLLARS_PER_MILE, dollars_reimbursed);  // Print and round numbers
    return 0;   // Exit program
}