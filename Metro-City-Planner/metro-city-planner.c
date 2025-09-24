/*
    Programmer: Magnus Høgh             Date: 19-09-2025
    Instructor: Anders Schlichtkrull    Class: AAU Imperative Programming E25
    Metro City Planners proposes that a community conserve its water supply by
    replacing all the community’s toilets with low-flush models that use only 2
    liters per flush. Assume that there is about 1 toilet for every 3 persons, that
    existing toilets use an average of 15 liters per flush, that a toilet is flushed on
    average 14 times per day, and that the cost to install each new toilet is $150.
    Write a program that would estimate the magnitude (liters/day) and cost of the
    water saved based on the community’s population.
*/

#include <stdio.h>
#define FLUSHES_PER_DAY 14
#define OLD_LITERS_PER_FLUSH 15
#define NEW_LITERS_PER_FLUSH 2
#define PRICE_PER_TOILET 150
#define TOILETS_PER_PERSON 0.3



int main(void)
{   
    double water_saved, persons, cost;

    /*
        I guess I could add variables like 'toilets' to show how many toilets there are and assign it's value by persons * TOILETS_PER_PERSON
        I could also probably let the user assign more variables, like PRICE_PER_TOILET and others
        I did actively decide to use defined macros
        I'd like to include a 'day' variable to estimate the amount of water saved over a period of time
    */

    printf("Input number of people: ");
    scanf("\n %lf", &persons);

    water_saved = (persons * TOILETS_PER_PERSON * OLD_LITERS_PER_FLUSH * FLUSHES_PER_DAY) - (TOILETS_PER_PERSON * persons * NEW_LITERS_PER_FLUSH * FLUSHES_PER_DAY);
    cost = persons * TOILETS_PER_PERSON * PRICE_PER_TOILET;
    printf("Water saved: %.1f liters per day\n", water_saved);
    printf("Cost of change: %.1f dollars\n", cost);
    return 0;
}
