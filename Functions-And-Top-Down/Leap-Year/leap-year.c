/*
    Programmer: Magnus Høgh             Date: 18-10-2025
    Instructor: Anders Schlichtkrull    Class: AAU Imperative Programming E25
    Vi har tidligere i denne lektion mødt skudårsfunktionen

    int isLeapYear(int year){
    int res;
    if (year % 400 == 0)
        res = 1;
    else if (year % 100 == 0)
        res = 0;
    else if (year % 4 == 0)
        res = 1;
    else res = 0;
    return res;
    }
    Programmer en ny skudårsfunktion med brug af && og ||, og uden brug af if-else og uden brug af betingede udtryk.

    Kald begge skudårsfunktioner for alle årstal mellem år 1900 og år 2100. Giver de to funktioner samme resultat på alle årstal?
*/


/* 
    Can't figure out why the functions disagree on the year 2000 & 4000 but i think it's to do with it being divisible by 400
*/

#include <stdio.h>

int isLeapYearIfElse(int year)
{
    int res;
    if (year % 400 == 0)
        res = 1;
    else if (year % 100 == 0)
        res = 0;
    else if (year % 4 == 0)
        res = 1;
    else res = 0;
    return res;
}

int isLeapYearAndOr(int year)
{
    int res;
    if ((year % 400 == 0 || year % 4 == 0) && !(year % 100 == 0))
    {
        res = 1;
    } else {
        res = 0;
    }
    return res;
}


int main(void)
{
    int n, m;

    printf("Please input start year: ");
    scanf("\n %d", &n);

    printf("Please input end year: ");
    scanf("\n %d", &m);


    for (int i = n; i < m; i++)
    {
        /*
        if (isLeapYearAndOr(i))
        {
            printf("%d is a leap year\n", i);
        } else {
            printf("%d is not a leap year\n", i);
        }
        
        if (isLeapYearIfElse(i))
        {
            printf("%d is a leap year\n", i);
        } else {
            printf("%d is not a leap year\n", i);
        }
        */
       if (isLeapYearAndOr(i) == isLeapYearIfElse(i))
        {
            printf("%d: Agree\n", i);
        } else {
            printf("%d: Disagree\n", i);
        }
    }

    return 0;
}