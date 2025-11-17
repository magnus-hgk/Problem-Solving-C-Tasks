/*
    Programmer: Magnus Høgh             Date: 14-11-2025
    Instructor: Anders Schlichtkrull    Class: AAU Imperative Programming E25

    Strengomvending består i at bytte om på tegnene i en tekststreng, således at de første tegn ender med at være de sidste. Eksempelvis er strengomvendingen af "streng" lig med "gnerts".

    Programmer funktionen strrev(char *str), som omvender tegnene i parameteren str. Bemærk at parameteren str både tjener som input og output parameter. Vi ønsker altså at bytte om på tegnene i det char array, som str peger på.
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_STRING_SIZE 400


char* reverseString(char string_to_reverse[])
{

    int len = strlen(string_to_reverse);
    char *reversed_string = (char *) (malloc((len + 1) * sizeof(char)));

    if (reversed_string == NULL)
    {
        printf("Not enough memory allocated!\n");
        exit(EXIT_FAILURE);
    }

    int i = 0;
    while (string_to_reverse[i] != '\0')
    {
        reversed_string[i] = string_to_reverse[len - i - 1];
        i++;
    }

    reversed_string[i] = '\0';
    

    return reversed_string;
}

int main(void)
{
    char string[MAX_STRING_SIZE];
    char *reversed_string;

    printf("Please input string to reverse: ");

    scanf("\n %[^\n]", string);

    reversed_string = reverseString(string);

    printf("Reversed string: %s\n", reversed_string);

}