/*
    Programmer: Magnus Høgh             Date: 14-11-2025
    Instructor: Anders Schlichtkrull    Class: AAU Imperative Programming E25
    -= Live coding with Anders =-
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STRING_SIZE 400

char* replaceCharInString(char old_string[], char char_to_replace, char char_to_insert)
{
    char *new_string = (char *) malloc((strlen(old_string + 1)) * sizeof(char));
    if (new_string == NULL)
    {
        printf("Not enough storage allocated\n");
        exit(EXIT_FAILURE);
    }
    int i = 0;
    while (old_string[i] != '\0')
    {
        if (old_string[i] == char_to_replace)
        {
            new_string[i] = char_to_insert;
        } else {
            new_string[i] = old_string[i];
        }
        i++;
    }
    new_string[i] = '\0';
    return new_string;
}


int main(void)
{
    char str[MAX_STRING_SIZE];
    char *replaced_str;
    char char_to_replace, char_to_insert;

    printf("Please input a string: ");
    scanf("\n %[^\n]s", str);

    printf("Please select character to replace: ");
    scanf("\n %c", &char_to_replace);

    printf("Please select character to insert: ");
    scanf("\n %c", &char_to_insert);


    replaced_str = replaceCharInString(str, char_to_replace, char_to_insert);
    
    printf("Original string: %s\n", str);
    printf("New string:      %s\n", replaced_str);
    free(replaced_str);
    return 0;
}

