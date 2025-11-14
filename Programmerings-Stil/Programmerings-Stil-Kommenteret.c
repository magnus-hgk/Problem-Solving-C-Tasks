#include <stdio.h>  

/*
    Programmer: Magnus Høgh             Date: 17-09-2025
    Instructor: Anders Schlichtkrull    Class: AAU Imperative Programming E25
    Analyze, restructure and improve the given program
*/

int main(void)
    {
    // Definer tre variabler som float - Float for at kunne dividere
    float first_number, xxx, sidsteTal;

    // Et print statement der beder om 3 tal
    printf("Give me three: ");

    // Et input der beder om 3 tal der er typecastede som floats og caster dem til de 3 variabler
    // Hvad sker der, hvis vi inputter andet end tal?
    // Hvordan kan vi se at vi skal tage et nyt tal?
    scanf("%f %f %f", &first_number, &xxx, &sidsteTal);

    // Printer resultatet som float, der er gennemsnittet af firstnumber, xxx og sidsteTal
    // Hvad sker der hvis vi inputter 0, negative tal eller tekst?
    printf("Theresult: %f\n", (first_number + xxx + sidsteTal) / 3.0);  
    
    // Exit Code
    return 0;
}