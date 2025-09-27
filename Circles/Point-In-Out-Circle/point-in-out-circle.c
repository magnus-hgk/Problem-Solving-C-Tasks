/*
    Programmer: Magnus Høgh             Date: 27-09-2025
    Instructor: Anders Schlichtkrull    Class: AAU Imperative Programming E25
    Skriv et program med tre doubles r, x og y.   r fortolkes som radius af en cirkel omkring punktet (0,0). x og y er koordinaterne (x, y) af et punkt.

    Programmet skal afgøre om punktet (x, y) er placeret inden i cirklen, på cirkelperiferien, eller uden for cirklen. Der er altså tre tilfælde. I bedes have tre logiske udtryk, assignet til tre logiske variable, som afspejler de tre forskellige situationer.

    Kan I lave én printf med brug af betingede udtryk (?:), der udskriver 'inden i'/'uden for' og 'på' cirklen, baseret på de logiske udtryks værdi?

    Hint: Det kan være svært at ramme periferien eksakt, fordi vi regner med doubles. Derfor kan I antage at punktet er 'på periferien' hvis det er ganske tæt på periferien. Indfør en symbolsk konstant DELTA, der fortæller hvor meget vi ønsker at kunne afvige fra et "perfect hit".
*/

#include <stdio.h>
#include <math.h>
#define DELTA 0.11 // Define delta as 0.11 with two decimals to ensure 1 decimal of rounding

    


int main(void)
{
    double radius, x, y, length;  // Declare variables

    /*
        Promt and take inputs for x, y and radius
    */
    printf("Input x coordinate: ");
    scanf("\n %lf", &x);
    printf("Input y coordinate: ");
    scanf("\n %lf", &y);
    printf("Input circle radius: ");
    scanf("\n %lf", &radius);

    
    // Do some math to determine the length from (0, 0) to (x, y)
    length =  sqrt(pow(x,2)+(pow(y,2)));


    // Check if coordinate is inside, outside or on point
    if (length <= DELTA + radius && length >= radius - DELTA)
    {
        printf("The coordinate (%.1f, %.1f) lies on the circle perimeter\n", x, y);
    } else if (length + DELTA > radius)
    {
        printf("The coordinate (%.1f, %.1f) lies outside the circle perimeter\n", x, y);
    } else if (length - DELTA < radius)
    {
        printf("The coordinate (%.1f, %.1f) lies inside the circle perimeter\n", x, y);
    }
   

    // printf("The point is %s\n", length > radius + DELTA ? length < radius - DELTA ? "Inside":"Outside":"On");
    // This shit is unreadable and unhealthy in my brain. If statements do the same thing just easier to understand.

    return 0;  // Kill program
    
}