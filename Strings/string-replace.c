/*
    Programmer: Magnus Høgh             Date: 14-11-2025
    Instructor: Anders Schlichtkrull    Class: AAU Imperative Programming E25
    -= Live coding with Anders =-
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void replaceCharInString(char arr[], char char_to_replace, char char_to_insert)
{
    int i = 0;
    while (arr[i] != '\0')
    {
        if (arr[i] == char_to_replace)
        {
            arr[i] = char_to_insert;
        }
        i++;
    }
}


int main(void)
{
    char str[] = "Foodback";

    printf("%s\n", str);

    replaceCharInString(str, 'o','e');

    printf("%s\n", str);
}

