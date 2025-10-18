/*
    Programmer: Magnus Høgh             Date: 17-10-2025
    Instructor: Anders Schlichtkrull    Class: AAU Imperative Programming E25
    Write a game where the player needs to guess a random number
*/

#define NUMBER_OUTSIDE_RANGE 50
#define DEFAULT_MODE 'M'
#define ALL_MODES_MINIMUM 1
#define EASY_MODE_MAX 10
#define MEDIUM_MODE_MAX 100
#define HARD_MODE_MAX 1000
#define IMPOSSIBLE_MODE_MAX __INT_MAX__ - 1

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int guess = __INT_MAX__, guesses = 0;   // Use INT_MAX as a placeholder as to not interfere with random generated numbers - Should probably use another form but idk how to do that yet
    int tmp_mode;                           // Initialize tmp_mode to allow switch statement
    char mode = DEFAULT_MODE, feedback_choice;  
    int min_number = ALL_MODES_MINIMUM, max_number;
    int feedback_helper;                             // Controls if you get feedback on your guesses

    srand(time(NULL)); // Seed rand() to not produce the same number every time

    
    printf("\n-- WELCOME TO THE GAME --\n\n");

    printf("Choose mode:\n[1] Custom\n[2] Easy\n[3] Medium\n[4] Hard\n[5] Impossible\n");

    scanf(" %d", &tmp_mode);    // Choose mode and store it to a temporary variable
    switch (tmp_mode)   // Switch statement to control what happens in each mode 
    {
    case 1: // Lets the user decide which numbers to use
        mode = 'C';
        printf("Input minimum number to guess:  ");
        scanf("\n %d", &min_number);

        printf("Input max number to guess:  ");
        scanf("\n %d", &max_number);
        break;
    case 2: // Hard coded difficulty
        mode = 'E';
        min_number = ALL_MODES_MINIMUM;
        max_number = EASY_MODE_MAX;
        break;
    case 3:
        mode = 'M';
        min_number = ALL_MODES_MINIMUM;
        max_number = MEDIUM_MODE_MAX;
        break;
    case 4:
        mode = 'H';
        min_number = ALL_MODES_MINIMUM;
        max_number = HARD_MODE_MAX;
        break;
    case 5:
        mode = 'I';
        printf("So you have chosen death!\n");
        min_number = -IMPOSSIBLE_MODE_MAX;
        max_number = IMPOSSIBLE_MODE_MAX;
        break;
    default:    // Default behavior
        mode = 'M';
        min_number = ALL_MODES_MINIMUM;
        max_number = MEDIUM_MODE_MAX;
        break;
    }

    while (feedback_choice != 'y' && feedback_choice != 'n')    // To choose if you want helper check if you chose y or n until either yes or no was chosen
    {
        printf("Do you want to enable feedback? (Tells you if you're too high or too low)\n[y/n]\n");
        scanf("\n %c", &feedback_choice);
        if (feedback_choice == 'y'){
            feedback_helper = 1;    // Enable feedback
        } else {
        feedback_helper = 0;        // Disable feedback
        }
    } 

    int number_to_guess = rand() % (max_number - min_number + 1) + min_number; // Create a random number between min_number and max_number
    
    if (feedback_helper)
    {
        printf("Guess a number between %d and %d\n", min_number, max_number);
    }

    do 
    {   
        printf("Enter your guess: ");
        scanf("\n %d", &guess);      
        if ((guess < min_number || guess > max_number) && (feedback_helper)) 
        {
            printf("No dummy, guess a number BETWEEN %d and %d\n", min_number, max_number);
        } else {
            if(feedback_helper)
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