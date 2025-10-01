/*
    Programmer: Magnus Høgh             Date: 30-09-2025
    Instructor: Anders Schlichtkrull    Class: AAU Imperative Programming E25
    Write a switch statement that assigns to the variable lumens the expected
    brightness of an incandescent light bulb whose wattage has been stored in
    watts.
*/

int switchLumens(int watts)
{   
    int lumens;
    switch (watts)
    {
    case 15:
        lumens = 125;
        break;
    case 25:
        lumens = 215;
        break;
    case 40:
        lumens = 500;
        break;
    case 60:
        lumens = 880;
        break;
    case 75:
        lumens = 1000;
        break;
    case 100:
        lumens = 1675;
        break;
    default:
        lumens = -1;
        break;
    }
    return lumens;
}

int ifLumens(int watts)
{
    int lumens;
    if (watts == 15)
    {
        lumens = 125;
    } else if (watts == 25)
    {
        lumens = 215;
    } else if (watts == 40) 
    {
        lumens = 500;
    } else if (watts == 60) 
    {
        lumens = 880;
    } else if (watts == 75) 
    {
        lumens = 1000;
    } else if (watts == 100) 
    {
        lumens = 1675;
    } else {
        lumens = -1;
    }
    
    return lumens;
}

#include <stdio.h>

int main(void)
{
    int watts, lumens;

    printf("Input watts: ");
    scanf("\n %d", &watts);

    lumens = switchLumens(watts);
    printf("Switch function: %d watts is %d lumens\n", watts , lumens);

    lumens = ifLumens(watts);
    printf("If function: %d watts is %d lumens\n", watts , lumens);
    return 0;
}