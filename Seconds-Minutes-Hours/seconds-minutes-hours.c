/*
    Programmer: Magnus Høgh             Date: 24-09-2025
    Instructor: Anders Schlichtkrull    Class: AAU Imperative Programming E25
    Skriv et C program, som indlæser et helt antal sekunder og som omregner dette tal til uger, dage, timer, minutter og sekunder på sædvanlig vis. Programmet skal udskrive antallet af uger, dage, timer, minutter og sekunder på skærmen.
*/
#include <stdio.h>
#define SECONDS_PER_MINUTE  60
#define SECONDS_PER_HOUR    (60 * SECONDS_PER_MINUTE)
#define SECONDS_PER_DAY     (24 * SECONDS_PER_HOUR)
#define SECONDS_PER_WEEK    (7 * SECONDS_PER_DAY)

int main(void)
{
    int input_seconds, seconds, minutes, hours, days, weeks;

    printf("Input number of seconds to parse: ");
    scanf("\n %d", &input_seconds);
    
    seconds = input_seconds;

    weeks = seconds / SECONDS_PER_WEEK;
    seconds %= SECONDS_PER_WEEK;

    days = seconds / SECONDS_PER_DAY;
    seconds %= SECONDS_PER_DAY;

    hours = seconds / SECONDS_PER_HOUR;
    seconds %= SECONDS_PER_HOUR;

    minutes = seconds / SECONDS_PER_MINUTE;
    seconds %= SECONDS_PER_MINUTE;
    

    printf("%d number of seconds are: \n%d weeks, %d days, %d hours, %d minutes and %d seconds\n", input_seconds, weeks, days, hours, minutes, seconds);


}