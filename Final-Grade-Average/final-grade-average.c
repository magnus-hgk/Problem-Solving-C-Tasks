/*
    Programmer: Magnus Høgh             Date: 19-09-2025
    Instructor: Anders Schlichtkrull    Class: AAU Imperative Programming E25
    Write a program to calculate the score needed on a final test to receive a desired letter grade
*/

#include <stdio.h>

int main(void)
{
    char grade;
    double course_average, final_score, minimum_course_average, final_weight, current_weight; // Define variables to be used


    // <Prompts & User input> printf and scanf cast to variables
    printf("Enter desired grade: ");
    scanf("\n %c", &grade);
    
    printf("Enter minimum average required: ");
    scanf("\n %lf", &minimum_course_average);

    printf("Enter current average in course: ");
    scanf("\n %lf", &course_average);

    printf("Enter how much the final counts as a percentage of the course grade: ");
    scanf("\n %lf", &final_weight);
    // </Prompts & User input>


    final_weight /= 100.0; // Convert from percentage to weight fx 0.xx
    current_weight = 1.0 - final_weight;  // "Calculate" weight of current average

    final_score = (minimum_course_average - course_average * current_weight)/final_weight;  // Fancy math to calculate the score needed to achieve that grade

    printf("To receive a %c, you need at least a score of %.1f\n", grade, final_score);  // Print result
}