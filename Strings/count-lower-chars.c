/*
    Programmer: Magnus Høgh             Date: 14-11-2025
    Instructor: Anders Schlichtkrull    Class: AAU Imperative Programming E25
    -= Live coding with Anders =-
*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define ARRAY_SIZE 400

int countLowerCharsInString(char str[])
{
    int i = 0, count = 0;

    while (str[i] != '\0')
    {
        
        if (islower(str[i]))
        {
            count++;
        }
        i++;
    }

    return count;
}


char* firstLower(char str[])
{
    int i = 0;
    while (str[i] != '\0')
    {
        if (islower(str[i])) 
        {
            return &str[i];
        }
        i++;
    }

    return 0;
}

int main(void)
{
    char str[ARRAY_SIZE];
    printf("Please input string to count number of lower-case characters: ");
    scanf("\n %[^\n]s", str);
    printf("Number of lower-case characters in \"%s\" is: %d\n", str, countLowerCharsInString(str));
    char *first_lower_char = firstLower(str);
    printf("The pointer of the first lower character has the value '%c' stored\n", *first_lower_char);

    return 0;
}

