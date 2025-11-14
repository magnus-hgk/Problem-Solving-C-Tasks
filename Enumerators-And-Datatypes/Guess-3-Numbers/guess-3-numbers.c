/*
    Programmer: Magnus Høgh             Date: 04-11-2025
    Instructor: Anders Schlichtkrull    Class: AAU Imperative Programming E25
    Write a game where the player needs to guess one of three random numbers
*/

#define NUMBER_OUTSIDE_RANGE 50
#define ALL_MODES_MINIMUM 1
#define EASY_MODE_MAX 10
#define MEDIUM_MODE_MAX 100
#define HARD_MODE_MAX 1000
#define IMPOSSIBLE_MODE_MAX 1000000

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void runGame();

void playAgain()
{
    int play_again;
    printf("Wanna play again?\n[1] Yes\n[2] No\n");
    scanf(" %d", &play_again);

    if (play_again)
    {
        runGame();
    }
}

void runGame()
{
    int guess = __INT_MAX__, guesses = 0;   // Use INT_MAX as a placeholder as to not interfere with random generated numbers - Should probably use another form but idk how to do that yet
    int mode;                           // Initialize tmp_mode to allow switch statement 
    int min_number = ALL_MODES_MINIMUM, max_number;

    srand(time(NULL)); // Seed rand() to not produce the same number every time

    
    printf("\n-- WELCOME TO THE GAME --\n\n");

    printf("Choose mode:\n[1] Custom\n[2] Easy\n[3] Medium\n[4] Hard\n[5] Impossible\n");

    scanf(" %d", &mode);    // Choose mode and store it to a temporary variable
    switch (mode)   // Switch statement to control what happens in each mode 
    {
    case 1: // Lets the user decide which numbers to use
        printf("Input minimum number to guess:  ");
        scanf("\n %d", &min_number);

        printf("Input max number to guess:  ");
        scanf("\n %d", &max_number);
        break;
    case 2: // Hard coded difficulty
        min_number = ALL_MODES_MINIMUM;
        max_number = EASY_MODE_MAX;
        break;
    case 3:
        min_number = ALL_MODES_MINIMUM;
        max_number = MEDIUM_MODE_MAX;
        break;
    case 4:
        min_number = ALL_MODES_MINIMUM;
        max_number = HARD_MODE_MAX;
        break;
    case 5:
        printf("So you have chosen death!\n");
        min_number = -IMPOSSIBLE_MODE_MAX;
        max_number = IMPOSSIBLE_MODE_MAX;
        break;
    default:    // Default behavior
        min_number = ALL_MODES_MINIMUM;
        max_number = MEDIUM_MODE_MAX;
        break;
    }

    int number_to_guess_1, number_to_guess_2, number_to_guess_3;

    number_to_guess_1 = rand() % (max_number - min_number + 1) + min_number; // Create a random number between min_number and max_number
    do 
    {
        number_to_guess_2 = rand() % (max_number - min_number + 1) + min_number; // Create a random number between min_number and max_number
    } while (number_to_guess_2 == number_to_guess_1);
    
    do
    {
        number_to_guess_3 = rand() % (max_number - min_number + 1) + min_number; // Create a random number between min_number and max_number
    } while (number_to_guess_3 == number_to_guess_1 || number_to_guess_3 == number_to_guess_2);
    
    
    printf("Guess a number between %d and %d\n", min_number, max_number);
    
    int number_found = 0;
    do 
    {   
        printf("Enter your guess: ");
        scanf("\n %d", &guess);      
        if ((guess < min_number || guess > max_number)) 
        {
            printf("No dummy, guess a number BETWEEN %d and %d\n", min_number, max_number);
        } else {
            printf("Try again!\n");
            guesses++;
        }

        if (guess == number_to_guess_1 || guess == number_to_guess_2 || guess == number_to_guess_3)
        {
            number_found = 1;
        }

    } while (!number_found);

    printf("You guessed it! The numbers were %d, %d and %d\nIt took you %d guesses\n", number_to_guess_1, number_to_guess_2, number_to_guess_3, guesses);

    playAgain();
}

int main(void)
{
    runGame();
    return 0;
}