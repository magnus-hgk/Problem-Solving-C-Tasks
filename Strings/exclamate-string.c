/*
    Programmer: Magnus Høgh             Date: 14-11-2025
    Instructor: Anders Schlichtkrull    Class: AAU Imperative Programming E25
    -= Live coding with Anders =-
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STRING_SIZE 400

char* exclamateString(char old_string[])
{
    char *new_string = (char *) malloc((strlen(old_string + 2)) * sizeof(char));
    if (new_string == NULL)
    {
        printf("Not enough storage allocated\n");
        exit(EXIT_FAILURE);
    }

    int i = 0;

    while (old_string[i] != '\0')
    {
        new_string[i] = old_string[i];
        i++;
    }

    new_string[i] = '!';
    new_string[i + 1] = '\0';

    return new_string;
}


char* doubleCharsInString(char old_string[])
{
    char *new_string_2 = (char *) malloc((strlen(old_string)) * sizeof(char) * 2 + sizeof(char));

    if (new_string_2 == NULL)
    {
        printf("Not enough storage allocated\n");
        exit(EXIT_FAILURE);
    }

    int i = 0, j = 0;
    while (old_string[i] != '\0')
    {
        new_string_2[j] = old_string[i];
        new_string_2[j + 1] = old_string[i];

        i++;
        j += 2;
    }

    new_string_2[j] = '\0';

    return new_string_2;
}

int main(void)
{
    char str[MAX_STRING_SIZE];
    char *new_str, *new_str_2;
    printf("Please input a string: ");
    scanf("\n %[^\n]", str);

    new_str = exclamateString(str);

    printf("Your new string is: %s\n", new_str);

    new_str_2 = doubleCharsInString(str);

    printf("Your new string is: %s\n", new_str_2);

    free(new_str);
    free(new_str_2);

    return 0;
}