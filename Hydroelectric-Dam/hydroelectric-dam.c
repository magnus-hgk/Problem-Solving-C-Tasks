/*
    Programmer: Magnus Høgh             Date: 18-09-2025
    Instructor: Anders Schlichtkrull    Class: AAU Imperative Programming E25
    Write a program to help predict the estimated energy production of a hydroelectric dam with a given height, water flow of x/m^3 pr. second and an efficiency of 90%
*/

#include <stdio.h>
#define GRAVITY 9.80            // Gravity constant
#define EFFICIENCY 0.90         // Efficiency of dam between 0, 1
#define WATT_TO_MEGAWATT 10E6   // Conversion constant from watt to megawatt



int main(void)
{
    const double cubic_metre_water_mass = 1000.0; // A constant used to calculate the mass of a cubic metre of water 
    double water_flow, water_mass, dam_height, estimated_energy; // Define variables to be used in program

    printf("Input the height of the dam in meters: ");  // Promt user for input: Height of dam
    scanf("\n %lf", &dam_height);                       // Cast user input to dam_height as a long float
    
    printf("Input the flow of water measured in cubic meters per second: ");    // Promt user for input: Flow of water as cubic metres per second
    scanf("\n %lf", &water_flow);                                               // Cast user input to water_flow variable as long float

    water_mass = water_flow * cubic_metre_water_mass; // Calculate the mass of the water

    estimated_energy = (water_mass * GRAVITY * dam_height * EFFICIENCY) / WATT_TO_MEGAWATT;  // Formula to calculate MegaWatts of energy produced. Should work without parentheses, because of the order of operations
    printf("\nWith a height of %.1f meters",dam_height);                                // Could collapse all these three printf() statements into 1 line
    printf(" and a flow of %.1f cubic meters per second\n", water_flow);                // Echoes and rounds water flow and height of dam
    printf("The dam will produce an estimated %.2f MW per second\n",estimated_energy);  // Prints estimated energy production 
    return 0; // Exits program
}
