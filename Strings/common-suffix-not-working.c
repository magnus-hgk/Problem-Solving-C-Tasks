/*
    Programmer: Magnus Høgh             Date: 14-11-2025
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


char* countCommonSuffix(char str_1[], char str_2[]) 
{   

    int count = 0;

    int len_1 = strlen(str_1);
    
    int len_2 = strlen(str_2);

    if (len_1 < len_2)
    {
        int tmp = len_1;
        len_1 = len_2;
        len_2 = tmp;
    }
    
    
    for (int i = len_1, j = len_2; i > 0; i--, j--)
    {
        if (str_1[i] == str_2[j])
        {
            count++;
        }
    }


    char *common_string = malloc(((count) + 1) * sizeof(char));

    if (common_string == NULL)
    {
        printf("NEMA\n");
        exit(EXIT_FAILURE);
    }

    int null_terminator = 0;
    for (int i = len_1 - count, j = 0; i <= len_1; i++, j++)
    {
        common_string[j] = str_1[i]; 

        null_terminator = i;
    }
    common_string[null_terminator] = '\0';
    return common_string;
}

int main(void)
{
    char string_1[MAX_STRING_SIZE], string_2[MAX_STRING_SIZE], *common_string;


    printf("Please input word 1: ");
    scanf("\n %[^\n]", string_1);

    printf("Please input word 2: ");
    scanf("\n %[^\n]", string_2);

    common_string = countCommonSuffix(string_1, string_2);

    printf("The endings matching letters are: %s\n", common_string);
    
    free(common_string);
    return 0;

}