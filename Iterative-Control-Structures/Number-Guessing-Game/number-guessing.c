/*
    Programmer: Magnus Høgh             Date: 17-10-2025
    Instructor: Anders Schlichtkrull    Class: AAU Imperative Programming E25
    Write a game where the player needs to guess a random number
*/

#define NUMBER_OUTSIDE_RANGE 50


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int guess = NUMBER_OUTSIDE_RANGE, guesses = 0, min, max;
    int tmp_mode;
    char mode = 'M';
    int min_number, max_number;

    srand(time(NULL)); // Seed rand() to not produce the same number every time

    
    printf("\n-- WELCOME TO THE GAME --\n\n");

    printf("Choose mode:\n[1] Hard\n[2] Medium\n[3] Easy\n");

    scanf(" %d", &tmp_mode);
    switch (tmp_mode)
    {
    case 1:
        mode = 'H';
        printf("Input minimum number to guess:  ");
        scanf("\n %d", &min_number);

        printf("Input max number to guess:  ");
        scanf("\n %d", &max_number);
        break;
    case 2:
        mode = 'M';
        min_number = 1;
        max_number = 20;
        break;
    case 3:
        mode = 'E';
        min_number = 1;
        max_number = 10;
        break;
    default:
        mode = 'M';
        min_number = 1;
        max_number = 20;
        break;
    }

    int number_to_guess = rand() % (max_number - min_number + 1) + min_number; 
    
    if (mode == 'E' || mode == 'M')
    {
        printf("Guess a number between %d and %d\n", min_number, max_number);
    }

    do 
    {   
        printf("Enter your guess: ");
        scanf("\n %d", &guess);      
        if (guess < min_number || guess > max_number) 
        {
            printf("No dummy, guess a number BETWEEN %d and %d\n", min_number, max_number);
        } else {
            if(mode == 'E' || mode == 'M')
            {
                if (guess > number_to_guess)
                {
                    printf("You've guessed too high\n");
                } else {
                    printf("You've guessed too low\n");
                }
            }    
            guesses++;
        }

    } while (guess != number_to_guess);

    printf("You guessed it! The number was %d\nIt took you %d guesses\n", number_to_guess, guesses);
    return 0;
}