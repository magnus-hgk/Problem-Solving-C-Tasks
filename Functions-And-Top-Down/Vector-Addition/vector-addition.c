/*
    Programmer: Magnus Høgh             Date: 31-10-2025
    Instructor: Anders Schlichtkrull    Class: AAU Imperative Programming E25
    Create a program that adds vectors
*/

#include <stdio.h>

// Define how many dimensions we are working with, currently only works with 2
#define VECTOR_SIZE 2


// Add 2 vectors
void addVectors(float *v1, float *v2, float *added_vector)
{   
    for (int i = 0; i < VECTOR_SIZE; i++)
    {
        added_vector[i] = v1[i] + v2[i];
    }
}

// Subtract 2 vectors
void subtractVectors(float *v1, float *v2, float *subtracted_vector)
{
    for (int i = 0; i < VECTOR_SIZE; i++)
    {
        subtracted_vector[i] = v1[i] - v2[i];
    }
}

// Function to multiply 2 vectors - This seems like we could do it in 1 function, all we do is change the operand
void multiplyVectors(float *v1, float *v2, float *dotted_vector)
{
    for (int i = 0; i < VECTOR_SIZE; i++)
    {
        dotted_vector[i] = v1[i] * v2[i];
    }
}

// Main function, everything starts here
int main(void)
{

    // Initilize vectors and mode
    float vector_1[VECTOR_SIZE];
    float vector_2[VECTOR_SIZE];
    float sum_vector[VECTOR_SIZE];
    int mode;

    // Take inputs!
    printf("Please input Vector 1 component a: ");
    scanf("\n %f", &vector_1[0]);
    printf("Please input Vector 1 component b: ");
    scanf("\n %f", &vector_1[1]);
    printf("Please input Vector 2 component a: ");
    scanf("\n %f", &vector_2[0]);
    printf("Please input Vector 2 component b: ");
    scanf("\n %f", &vector_2[1]);

    // Choose mode
    printf("-= Please choose mode =-\n[1] Add\n[2] Subtract\n[3] Dot Product\n");
    scanf(" %d", &mode);


    // Switch case to control which function is run
    switch (mode)
    {
        case 1:
            addVectors(vector_1, vector_2, sum_vector);
            break;
        case 2:
            subtractVectors(vector_1, vector_2, sum_vector);
            break;

        case 3:
            multiplyVectors(vector_1, vector_2, sum_vector);
            break;

        // If you input something not expected?
        default:
            printf("You've broken something!\n");
            break;
    }


    
    // Change + to %c
    printf("|%.2f| + |%.2f| - |%.2f| \n", vector_1[0], vector_2[0], sum_vector[0]);
    printf("|%.2f| + |%.2f| - |%.2f| \n", vector_1[1], vector_2[1], sum_vector[1]);


    // Kill program
    return 0;
}

// The Magnusificient 
