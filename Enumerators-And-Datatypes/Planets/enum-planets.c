/*
    Programmer: Magnus Høgh             Date: 04-11-2025
    Instructor: Anders Schlichtkrull    Class: AAU Imperative Programming E25
    Enum some planets and print the circumference of a planet using a function
*/


#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#define PI 3.14159

enum planet {mercury = 1, venus, earth, mars, jupiter, saturn, uranus, neptune};

typedef enum planet planet;



double circumeference(planet p)
{
    const int planetRadius[] = {0, 2440, 6052, 6371, 3390, 69911, 58232, 25362, 24622};
    return planetRadius[p] * PI * 2;
}

int choosePlanet()
{
    int planet_choice;
    printf("Choose a planet!\n[1] Mercury\n[2] Venus\n[3] Earth\n[4] Mars\n[5] Jupiter\n[6] Saturn\n[7] Uranus\n[8] Neptune\n");

    scanf(" %d", &planet_choice);

    printf("You chose planet %d\n", planet_choice);
    return planet_choice;
}

planet intToPlanet(int planet_choice)
{   
    planet p;
    p = planet_choice;
    return p;
}

int main(void)
{
    int planet_choice = choosePlanet();
    planet pl = intToPlanet(planet_choice);
    
    printf("The circumference of planet %d is %.2lf km.\n", planet_choice, circumeference(pl));

    return 0;
}