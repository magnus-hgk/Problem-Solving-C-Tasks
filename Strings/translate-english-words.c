/*
    Programmer: Magnus Høgh             Date: 14-11-2025
    Instructor: Anders Schlichtkrull    Class: AAU Imperative Programming E25
    Skriv et program som oversætter udvalgte engelske navneord fra ental til flertal. Følgende regler skal overholdes:

    Hvis et navneord ender i et "y" fjernes "y" og der tilføjes "ies".
    Hvis et navneord ender i et "s", "ch" eller "sh" tilføjes et "es".
    I alle andre tilfælde tilføjes et "s" til navneordet.
    Udskriv hvert navneord i både ental og flertal.

    Som altid skal du designe en funktion med et passende navn, og med parametre (input og evt. output). Og som altid laver vi top-down programmering ved trinvis forfinelse. Ønsker du at bruge returværdien af funktionen til noget?

    Afprøv dit program på følgende engelske navneord:

    chair dairy boss circus fly dog church clue dish
    Alloker plads til disse i en passende array af tekststrenge.

    Denne opgave svarer til opgave 5 side 532 i 6. udgave af lærebogen

    Hints: Måske er funktionen strrchr fra string.h nyttig i denne opgave. Den søger efter et tegn fra bagenden af strengen. Husk også at du blot kan tilgå tegn i en tekststreng med array subscripting operatoren: str[i]. Du kan teste om et tegn i din streng svarer til et bestemt tegn: str[i] == 'y'.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ARRAY_SIZE 400

char* allocateMemory(char *ch, int add_memory)
{
    char *new_word = (char *) (malloc(strlen(ch + add_memory) * sizeof(char)));
    
    if (new_word == NULL)
    {
        printf("Not enough storage allocated\n");
        exit(EXIT_FAILURE);
    }

    return new_word;
}

char* copyArray(char *old_word, char *new_word)
{
    int i = 0;
    while (old_word[i] != '\0')
    {
        new_word[i] = old_word[i];
        i++;
    }

    return new_word;
}

char* replaceEnding(char *old_word)
{
    char mode[3];
    mode[0] = old_word[strlen(old_word) - 2];
    mode[1] = old_word[strlen(old_word) - 1];
    mode[2] = '\0';

    if (mode[1] == 'y') 
    {
        char *new_word = allocateMemory(old_word, 3);

        copyArray(old_word, new_word);

        new_word[strlen(old_word) - 1]  = 'i';
        new_word[strlen(old_word)]      = 'e';
        new_word[strlen(old_word) + 1]  = 's';
        new_word[strlen(old_word) + 2]  = '\0';

        return new_word;
    } else if (mode[1] == 's' || (mode[0] == 'c' && mode[1] == 'h') || (mode[0] == 's' && mode[1] == 'h')) {

        char *new_word = allocateMemory(old_word, 3);

        copyArray(old_word, new_word);
        
        new_word[strlen(old_word)]     = 'e';
        new_word[strlen(old_word) + 1] = 's';
        new_word[strlen(old_word) + 2] = '\0';

        return new_word;
    } else {
        char *new_word = allocateMemory(old_word, 2);

        copyArray(old_word, new_word);
        
        new_word[strlen(old_word)]     = 's';
        new_word[strlen(old_word) + 1] = '\0';

        return new_word;
    }
} 


int main(void)
{
    char str[MAX_ARRAY_SIZE];
    char *new_word;

    printf("Please input a word to translate: ");

    scanf("\n %[^\n]", str);

    new_word = replaceEnding(str);

    printf("%s turns into %s\n", str, new_word);

    return 0;
}