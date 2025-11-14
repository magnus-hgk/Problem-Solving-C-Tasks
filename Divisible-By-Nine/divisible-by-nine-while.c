/*  Test that for any number above 9 you can take each digit contained in that number
    and subtract it from the original number and the the resulting number will be divisible by 9.
    For loop something something. Maybe while true, with a timer based break or somesing.

    For now lets just say we do it for iterations amount of times
*/


#include <stdio.h>

int handleNegativeNumber(int x)
{
    x = -x; // fx. if n == -20, new n = --20 == 20
    return x;
}


int digitInNumber(int n, int digit_position, int number_of_digits)  // Find out the digit in a given number is based on its position from right to left.
{
    int digits[number_of_digits]; // Create array to store the individual digits from the given dumber
    int i = 0;  // Initialize and assign i to be 0 for our while loop later on
    if (n < 0) // Handle negative numbers
    {
        n = handleNegativeNumber(n); // Return n as a positive integer
    }

    while (n > 0) // Loop through digits in number, and extract that digit
    {
        digits[i] = n % 10; // Extract rightmost digit in number and store in array
        n /= 10;            // Remove rightmost digit in number
               
        if (i == digit_position) // Stop loop from storing every number
        {
            break;
        } else {
        i++; // Move on to next digit
        }
    }
    return digits[digit_position];  // Return digit at digit_position
}

int numberOfDigits(int n) // Find out how many digits are in a given number
{
    int digits = 0; // Initialize digits to store the amount of digits there are;
    if (n == 0) // If we start at 0, which we wouldn't most times break loop and return 0
    {
        return digits;
    }
    

    if (n < 0) // Check if n is negative
    {
        n = handleNegativeNumber(n); // return n as a positive integer
    }

    

    while (n > 0) // Count number of digits
    {
        digits++;    // Count before removing digit
        n = n / 10;  // Remove rightmost digit
    }
    

    return digits; // Return number of digits
}

int main(void)
{

    // Initialize and assign variables
    int iterations = 10;
    int number_of_digits, tmp;
    int divisible_by_nine = 1; 
    

    while (divisible_by_nine)   // While loop runs until we find a number that is not divisble by 9
    {
        printf("Testing %d\n", iterations);
        tmp = iterations;   // Assign iterations to tmp to avoid changing iterations
        number_of_digits = numberOfDigits(iterations);  // Count number of digits in iterations
        int num_array[number_of_digits];    // Create an array with the size of digits calculated above
        for (int j = 0; j < number_of_digits; j++)  // Store each digit in the above array and subtract that array from tmp
        {
            num_array[j] = digitInNumber(iterations, j, number_of_digits);  // Assign digits to array
            tmp -= num_array[j];    // Subtract the digit from tmp
        }
        tmp = tmp % 9;
        if (tmp != 0)   // Checks if tmp is fully divisble by 9
        {
            divisible_by_nine = 0;  // Sets divisble by 9 to false
        } else {
            iterations++;   // Iterates to the next number
        }
    }
    printf("\nThe number %d and its components are not divisible by 9", iterations);    // Print number not divisble by 9
    return 0; // Kill program
}