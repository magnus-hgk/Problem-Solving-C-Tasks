/*
    Programmer: Magnus Høgh             Date: 04-11-2025
    Instructor: Anders Schlichtkrull    Class: AAU Imperative Programming E25
    Definer tre forskellige enumeration typer for hhv. forret, hovedret og dessert.

    Enumeration typen forret skal indholde værdier for guacamole, tarteletter, lakserulle og græskarsuppe.

    Enumeration typen hovedret skal indholde værdier for gyldenkål, hakkebøf, gullash og forloren hare.

    Enumeration typen dessert skal indholde værdier for pandekager med is, gulerodskage, choklademousse, og citronfromage.

    Undgå dog danske bogstaver i dit C program. Det giver kun besvær!

    Skriv en funktion maaltid, som vælger og udskriver én tilfældig ret i hver af de tre kategorier. Læs om "tilfældige tal" i C her.

    Kald funktionen maaltid 25 gange i main, med det formål at få genereret et menukort af 25 kombinationer af forret, hovedret og dessert.

    Overvej om der skal defineres flere små funktioner, som nedbryder det samlede problem i delproblemer.

    Denne opgave er inspireret af en tilsvarende opgave i bogen 'C by Dissection'. Benyttet med tilladelse fra forlaget.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

enum entre_course {guacamole, tartellets, salmon_roll, pumpkin_soup};
enum main_course {golden_kale, chopped_beef, goulash, forlorn_rabbit};
enum dessert_course {ice_pancakes, carrot_cake, chocolate_mousse, lemon_fromage};
typedef enum entre_course entre_course;
typedef enum main_course main_course;
typedef enum dessert_course dessert_course;

void printMeal(entre_course e, main_course m, dessert_course d, int count)
{

    printf("Course %d: ", count);
    switch (e)
    {
    case guacamole:
        printf("guacamole");
        break;

    case tartellets: 
        printf("tartellets");
        break;

    case salmon_roll: 
        printf("salmon rolls");
        break;

    case pumpkin_soup: 
        printf("pumpkin soup");
        break;

    default:
        printf("Fuck you\n");
        exit(EXIT_FAILURE);
        break;
    }

    printf(", ");

    switch (m)
    {
    case golden_kale:
        printf("roasted kale");
        break;

    case chopped_beef: 
        printf("beef");
        break;

    case goulash: 
        printf("goulash soup");
        break;
            
    case forlorn_rabbit: 
        printf("forlorn rabbit");
        break;

    default:
        printf("Fuck you\n");
        exit(EXIT_FAILURE);
        break;
    }

    printf(", and ");

    switch (d)
    {
    case ice_pancakes:
        printf("pancakes with ice cream");
        break;

    case carrot_cake: 
        printf("carrot cake with cream cheese frosting");
        break;

    case chocolate_mousse: 
        printf("chocolate mousse");
        break;
            
    case lemon_fromage: 
        printf("a lemon fromage pie");
        break;

    default:
        printf("Fuck you\n");
        exit(EXIT_FAILURE);
        break;
    }
    printf(".\n\n");
}

void threeCourseMeal(int count)
{   
    entre_course e; 
    main_course m;
    dessert_course d;
    
    e = rand() % 4;
    m = rand() % 4;
    d = rand() % 4;



    printMeal(e, m, d, count);
}

int main(void)
{

    srand(time(NULL));

    for (int i = 0; i < 25; i++)
    {
        threeCourseMeal(i + 1);
    }


    return 0;
}
