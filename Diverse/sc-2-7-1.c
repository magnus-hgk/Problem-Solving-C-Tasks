 /*
    Programmer: Magnus Høgh             Date: 17-09-2025
    Instructor: Anders Schlichtkrull    Class: AAU Imperative Programming E25
    Determines the value of a collection of coins as a batch program
 */
 #include <stdio.h>
 int
 main(void)
 {
 char first, middle, last; /* input - 3 initials */
 int pennies, nickels; /* input - count of each coin type */
 int dimes, quarters; /* input - count of each coin type */
 int dollars; /* input - count of each coin type */
 int change; /* output - change amount */
 int total_dollars; /* output - dollar amount */
 int total_cents; /* total cents */

 /* Get and display the customer's initials. */
 scanf(" %c%c%c", &first, &middle, &last);
 printf("\nWelcome %c%c%c\n", first, middle, last);

 /* Get the count of each kind of coin. */
 scanf(" %d", &dollars);
 printf("Number of $ coins: %d\n", dollars);
 scanf(" %d", &quarters);
 printf("Number of quarters: %d\n", quarters);
 scanf(" %d", &dimes);
 printf("Number of dimes: %d\n", dimes);
 scanf(" %d", &nickels);
 printf("Number of nickels: %d\n", nickels);
 scanf(" %d", &pennies);
 printf("Number of pennies: %d\n", pennies);

 /* Compute the total value in cents. */
 total_cents = 100 * dollars + 25 * quarters + 10 * dimes +
 5 * nickels + pennies;

 /* Find the value in dollars and change. */
 total_dollars = total_cents / 100;
 change = total_cents % 100;

/* Display the credit slip with value in dollars and change. */
printf("\n\n%c%c%c Coin Credit\nDollars: %d\nChange: %d cents\n",
 first, middle, last, total_dollars, change);

 return (0);
 }