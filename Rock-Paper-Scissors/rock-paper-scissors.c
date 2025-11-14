/*
    Programmer: Magnus Høgh             Date: 03-10-2025
    Instructor: Anders Schlichtkrull    Class: AAU Imperative Programming E25
    Write Rock, paper, scissors. Focus on selective statements.
*/

#include <stdio.h>      // Standard input output : printf() & scanf()
#include <stdlib.h>     // Inkluderer rand() funktionen så vi kan vælge et tilfældigt tal
#include <time.h>       // For at seede rand() funktionen 
#include <windows.h>    // Inkluderer for Sleep() functionen

int main(void)
{
    char bot_choice, player_choice = 0; // Initialize bot and player

    printf("Input your selection (R, P, S): ");     // Prompt player for Rock, paper or scissors
    while (!(player_choice == 'R' || player_choice == 'P' || player_choice == 'S'))
    {
        scanf("\n %c", &player_choice);    // Cast choice to player
    }

    // Sleep(1000);    // Sleep for a little
    
    printf("Player choice: %c\n", player_choice);   // Print player choice 
    srand(time(NULL));  // Seed rand()
    bot_choice = ((rand() % 3) + 1); // Choose number between 1 and 3 and assign to bot

    // Sleep(1000);    // Sleep for a little while

    switch (bot_choice) // Switch start: Assign Rock, paper or scissors to bot
    {
    case 1:
        bot_choice = 'R';   // Assign Rock
        printf("Bot choice: %c\n", bot_choice); // Print choice
        break;
    case 2:
        bot_choice = 'P';
        printf("Bot choice: %c\n", bot_choice);
        break;
    case 3:
        bot_choice = 'S';
        printf("Bot choice: %c\n", bot_choice);
        break;
    default:
        printf("Bot choice invalid\nKilling Program: Try again\n");
        return 0;
    }   // Switch end


    // Sleep(1000);    // Sleep for a little
    if (player_choice == bot_choice) // Check if game is a tie
    {
        printf("Draw!\n");
    } else {
        // Check all winconditions for the Bot
        if ((player_choice == 'R' && bot_choice == 'P') || (player_choice == 'S' && bot_choice == 'R') || (player_choice == 'P' && bot_choice == 'S'))
        {   
            // If the bot won print
            printf("Bot Won!\n");
        } else {
            // If the bot did not win print
            printf("Player Won!\n");
        }
    }

    return 0;   // Kill program
}

