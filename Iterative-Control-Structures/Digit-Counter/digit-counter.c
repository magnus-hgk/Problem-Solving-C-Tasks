/*
    Programmer: Magnus Høgh             Date: 17-10-2025
    Instructor: Anders Schlichtkrull    Class: AAU Imperative Programming E25
    
    Målet med denne opgave er at træne dig i programmering med løkker, herunder at vælge gode iterative kontrolstrukturer til opgaven. Som altid er det også målet at lave et velopstillet program med god indrykning, og med brug af gode variabelnavne.

    I denne opgave skal du skrive et program, der kan tælle hvor mange tal (fra 1 til n) der indeholder et bestemt ciffer c. For eksempel er der 19 tal fra 1 til 100 der indeholder cifferet 5. (Vi bruger det almindelige 10-talsystem i denne opgave).

    Vi starter med en simplere opgave og bygger os frem mod en komplet løsning. Du skal kun aflevere den færdige version (eller så langt du nåede).

    Programmet skal indlæse to heltal n og c. Cifferet c skal være et heltal mellem 0 og 9, og n skal være mindst 1. (Du kan printe en fejlbesked, hvis brugeren indtaster et ugyldigt input).

    Som en opvarmning til den egentlige opgave, kan du skrive et program, der tjekker om n slutter på cifret c. (Hint: du kan benytte modulo-operatoren til dette.)

    Næste skridt er at omskrive programmet, så det kan tjekke om n indeholder cifret c. Hvilken iterativ kontrolstruktur kan du bruge til at opnå dette? Overvej omhyggeligt hvordan løkken starter, og hvordan den slutter. Tag gerne inspiration fra følgende regne-eksempel, hvor jeg har beskrevet processen for et konkret tal og ciffer.

    Indeholder 7264 cifret 2?
        Slutter 7264 på 2?
        Nej
        Divider med 10 (heltalsdivision) = 726
    Indeholder 726 cifret 2?
        Slutter 726 på 2?
        Nej
        Divider med 10 (heltalsdivision) = 72
    Indeholder 72 cifret 2?
        Slutter 72 på 2?
        Ja
        Derfor indeholder 7264 cifret 2.

    Som det sidste skridt skal du nu udvide programmet, så det tæller hvor mange af tallene fra 1 til n, der indeholder cifferet c. Hvilken iterativ kontrolstruktur egner sig godt til dette?

    Udskriv resultatet med printf: for eksempel hvis input er 100 5, så er output 19.

    Tak til Morten Konggaard Schou for denne opgavetekst.
*/



#include <stdio.h>



int main(void)
{
    int n = 0, c = 0, digit_in_number_count = 0;
    int n_old;

    
    while (!(n > 0))    // Check if n is greater than 0 and prompt for new imput if not
    {
        printf("Input n: ");    // Prompt for integer input 
        scanf("\n %d", &n);     // Cast input to variable n
    }
    n_old = n;  // To use for the last print and to compare i to, just to be pretty


    while (!(0 < c && c < 10))  // Check if c is between 0 and 10 not inclusive and prompt for new input if not
    {
        printf("Input c: ");    // Prompt for integer input
        scanf("\n %d", &c);     // Cast input to variable n
    }
    
    for (int i = 1, j, digit_found; i <= n_old; i++)
    {
        digit_found = 0;    // Flag to control when the digit is found as to avoid edge cases where fx n = 55 and c = 5 where we would count twice
        j = i;      // Set j to i so we can manipulate "i" and still count
        while (j > 0)   // Check if n is greater than 0, and if so continue calculation, because we seperate each digit when we do the last calculation n will be 0 we could check if n == 0 too
        {
            if (j % 10 == c)    // Check the last digit of n and if it is equal to c run code block
            {
                digit_found = 1;    // We found the digit so set variable to true
            }
            j = j / 10; // Remove last digit in n
        }
        if (digit_found)    // If the digit is found count once
        {
            digit_in_number_count++;
        }
    }
    printf("All numbers from 1 to %d contain the number %d, %d times\n", n_old, c, digit_in_number_count); // Print result

    return 0;   // Kill program
}