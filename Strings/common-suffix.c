/*
    Programmer: Magnus Høgh             Date: 16-11-2025
    Instructor: Anders Schlichtkrull    Class: AAU Imperative Programming E25

    Skriv et program med en funktion der finder og returnerer det længste fælles endelse (suffix) af to ord.

    Funktionen skal have tre parametre. De to ord (to tekststrenge) skal overføres som input parametre. Den længste fælles endelse skal returneres i en output parameter (også en tekststreng). (Hvordan markerer du forskellen på en input parameter og en output parameter, som begge er tekststrenge?) Overvej hvordan der bliver allokeret plads til tesktstrengen med den fælles endelse (vil du bruge statisk eller dynamisk allokering?).

    Eksempelvis er "logi" den længste fælles endelse af ordene "datalogi" og "biologi". Og den længste fælles endelse af "program" og "diagram" er "gram".

    Denne opgave svarer til opgave 8 side 533 i 6. udgave af lærebogen
*/


#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_STRING_SIZE 45

void countCommonSuffix(char str_1[], char str_2[], char common_suffix[])
{
    int len_str_1 = strlen(str_1), len_str_2 = strlen(str_2);


    int i = 0;
    while (str_1[len_str_1 - i - 1] == str_2[len_str_2 - i - 1])
    {
        i++;
    }
    

    int j = 0;
    while (j < i)
    {
        common_suffix[j] = str_1[len_str_1 - i + j];
        j++;
    }

    common_suffix[i] = '\0';
}


int main(void)
{

    char word_1[MAX_STRING_SIZE], word_2[MAX_STRING_SIZE], common_suffix[MAX_STRING_SIZE];

    printf("Please input word 1: ");
    scanf("\n %[^\n]", word_1);

    printf("Please input word 2: ");
    scanf("\n %[^\n]", word_2);


    countCommonSuffix(word_1, word_2, common_suffix);



    printf("The largest common suffix is: %s\n", common_suffix);


    return 0;

}