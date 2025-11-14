/*
    Programmer: Magnus Høgh             Date: 24-10-2025
    Instructor: Anders Schlichtkrull    Class: AAU Imperative Programming E25
    Write a program that calculates the side length of an n-sided polygon and it's points
*/



#include <stdio.h>
#include <math.h>


void destroyBuffer()
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF) 
    {
        // discard remaining characters on the line
    }
}

int userInput(int n)
{
    int received_correct_input = 0;
    double coordinate;
    do {
        received_correct_input = 0;

        printf("Input coordinate for point %d: ", n + 1);
        received_correct_input = scanf("\n %lf", &coordinate);

        if (!received_correct_input)
        {
            destroyBuffer();
        }

    } while (!received_correct_input);
    return coordinate;
}


double sideLength(double x_1, double y_1, double x_2, double y_2)
{   
    return sqrt((x_2 - x_1) * (x_2 - x_1)) + ((y_2 - y_1) * (y_2 - y_1));
}


int main(void)
{
    double side_length, x_1, y_1, x_2, y_2, first_x, first_y;
    int n;


    printf("Input number of sides: ");
    scanf("\n %d", &n);

    int received_correct_input = 0;

    x_1 = userInput(0);
    x_2 = userInput(0);
    
    first_x = x_1;
    first_y = y_1;

    for (int i = 1; i < n; i++)
    {
        x_2 = x_1;
        y_2 = y_1;

        x_1 = userInput(i);
        y_1 = userInput(i);

        side_length += sideLength(x_1, y_1, x_2, y_2);
    }

    side_length += sideLength(x_1, y_1, first_x, first_y);

    printf("Side length total: %.2lf\n", side_length);

    return 0;
}