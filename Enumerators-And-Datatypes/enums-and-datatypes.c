/*
    Programmer: Magnus Høgh             Date: 04-11-2025
    Instructor: Anders Schlichtkrull    Class: AAU Imperative Programming E25
    -= Live Coding w/ Anders =-
    - Scope and scope rules
    - Types & typecheck
    - Enumeration Types
    - Pseudo Random Numbers

    Rock, paper, scissors!
*/


#include <stdio.h>
#include <time.h>
#include <stdlib.h>

enum hand {rock, paper, scissors};
typedef enum hand hand;
hand charToHand(char c)
{
    hand h;

    switch (c)
    {
    case 'R':
        h = rock;
        break;
    
    case 'P':
        h = paper;
        break;
    case 'S':
        h = scissors;
        break;

    default:
        printf("You've broken something!\n");
        exit(EXIT_FAILURE);
        break;
    }

    return h;
}

void printHand(hand h)
{
    switch (h)
    {
    case rock:
        printf("rock");
        break;
    
    case paper:
        printf("paper");
        break;
    
    case scissors:
        printf("scissors");
        break;
    
    default:
    printf("You've broken something!\n");
    exit(EXIT_FAILURE);
        break;
    }
}

hand chooseHand()
{
    hand player;
    char player_choice = ' '; // Random character to avoid the buffer somehow contained R, S or P
    while (!(player_choice == 'R' || player_choice == 'P' || player_choice == 'S'))
    {
        printf("Input your selection (R, P, S): ");     // Prompt player for Rock, paper or scissors
        scanf("\n %c", &player_choice);    // Cast choice to player
    }
    player = charToHand(player_choice);
    return player;
}


hand botChoice()
{
    // Choose number between 0 and 2 and return as hand
    return (hand) (rand() % 3);
}


void calculateWinner(hand player, hand bot)
{

    printf("You chose: ");
    printHand(player);
    printf("\nBot chose: ");
    printHand(bot);
    printf("\n");

    if (player == bot) // Check if game is a tie
    {
        printf("Draw!\n");
    } else {
        // Check all winconditions for the Bot
        if ((player == rock && bot == paper) || (player == scissors && bot == rock) || (player == paper && bot == scissors))
        {   
            // If the bot won print
            printf("Bot Won!\n");
        } else {
            // If the bot did not win print
            printf("Player Won!\n");
        }
    }
}




void runGame()
{
    srand(time(NULL));  // Seed rand()

    hand player;
    hand bot;

    player = chooseHand();
    bot = botChoice();

    calculateWinner(player, bot);
}




int main(void)
{
    runGame();
    return 0;   // Kill program
}

