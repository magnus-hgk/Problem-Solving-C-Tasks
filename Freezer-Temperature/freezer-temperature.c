/*
    Programmer: Magnus Høgh             Date: 17-09-2025
    Instructor: Anders Schlichtkrull    Class: AAU Imperative Programming E25
    Estimate the temperature (C*) of a freezer after a power outage and a given time (Hours)
*/

#include <stdio.h>

int main(void)
{
    double hours_since_failure, temperature, ambient_temperature;   // Define variables to be used in program
    const int temperature_lost_constant = 20;                       // Define a constant that is used in the estimated temperature formula

    printf("Input ambient temperature in celcius: ");   // Prompt the user for an input
    scanf("\n %lf", &ambient_temperature);              // Cast user input into variable ignoring blanks and line breaks


    printf("Input number of hours since power failure: ");  // Prompt the user for an input 
    scanf("\n %lf", &hours_since_failure);                  // Cast user input into variable ignoring blanks and line breaks

    temperature = ((hours_since_failure * hours_since_failure * 4) / (hours_since_failure + 2)) - temperature_lost_constant; // Calculate the estimated temperature of a freezer after a given amount of hours and assign the value to temperature

    

    if (temperature > ambient_temperature){ // If the formula ever returns a value higher than the ambient temperature set temperature to be the ambient temperature
        temperature = ambient_temperature;
    }

    

    printf("Temperature is approximately: %.1f degrees celcius, %.1f hours after a power failure.\n", temperature, hours_since_failure);  // Print temperature and hours with 1 decimal

    return 0;  // Exit program
}


/*
    Ways to improve program:
        - Freezer start temperature
*/