/*
    Programmer: Magnus Høgh             Date: 31-10-2025
    Instructor: Anders Schlichtkrull    Class: AAU Imperative Programming E25
    Skriv et program der modellerer en simpel regnemaskine. 
    Regnemaskinen holder styr på ét enkelt tal af typen double, 
    som indholder det hidtidigt beregnede resultat. Dette tal kaldes akkumulatoren. 
    Akkumulatores startværdi er 0.0. I en simpel, 
    iterativ dialog med brugeren udføres der forskellige beregninger på akkumulatoren. 
    Disse beregninger kan være styret af unære eller binære operatorer, 
    som i denne opgave alle noteres med netop ét tegn.
*/


/*
    Could probably add a starting value input if I wanted but the task doesn't ask for it.
*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h> // Useful for exit(EXIT_FAILURE)


/* 
    n = operand
    c = operator
    s = sum
*/

const char operators[] = {'+', '-', '*', '/', '!', '#', '^', '%', 'q'};  // Valid characters as char in an array so that i can loop through it and compare my input in scanData
const int operators_array_length = 9; // Could probably use a macro, but this just feelst more right - But when i think about it it seems a macro would be more appropriate


// Used to handle inputs of longer lenghts than a single character that would othervise break my scanData function
void destroyBuffer()
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF) 
    {
        // discards remaining characters on the line by using them in an emty while loop
    }
}


// Print current result, takes a pointer and prints the value of it
void printResult(double *s)
{
    // Prints current result with 2 decimals of precision
    printf("Current result: %.2lf\n", *s);
}

void printOperations()
{
    printf("Valid operations are: \n");
    printf("[+] Add         | [-] Subtract | [*] Multiply\n[/] Divide      | [!] Divide 1 by current sum\n[#] Square root | [^] Current sum to the power of\n[%%] Invert current sum | [q] Quit program\n");         
}


// Takes two pointers, the operation to be performed and the operand (the number) Scans data from the terminal, checks if it's a valid input and then casts it to the pointer
void scanData(char *c, double *n)
{
    int is_valid_operator = 0; // Define and initialize flag to control if the input is valid

    do // Prompt for and scan the input
    {
        printf("Input next operator: ");
        scanf(" %c", c); // Doesn't use & operator because it is passed in to the function as a pointer
        for (int i = 0; i < operators_array_length && !is_valid_operator; i++) // Run this for loop 10 times or until the input is valid and 
        {
            is_valid_operator = (*c == operators[i]); // Check if input is valid by comparing the input to a list of all valid operators
        }
        
    } while (!is_valid_operator); // Run while loop until input is valid
    

    // Checks if operator is binary or unary
    // Could probably use a flag to calculate this, but maybe it's smart enough to forget it in the memory?
    if (!(*c == '%' || *c == '!' || *c == '#' || *c == 'q')) 
    {
        int is_valid_operand = 0; // Define flag to deem valid user input for the operand
        do 
        {
            printf("Input next number: ");
            is_valid_operand = scanf(" %lf", n); // Check if scanf, gets a valid input and pass it to the pointer n

            if (!is_valid_operand)
            {
                destroyBuffer(); // Call destroybuffer to destroy inputs of lengths > 1
            }

        } while (!is_valid_operand);  // Run this loop while the operand is not valid
        
    }
}


// Perform the next operation, pass in three pointers
void performNextOperation(char *c, double *n, double *s)
{
    // Run a switch statement based on the operator
    switch (*c)
    {   
        // For every case 
        case '+':
            *s += *n;   // Add current operand to sum
            break;

        case '-':
            *s -= *n;   // Subtract operand from sum
            break;

        case '*':
            *s *= *n;   // Multiply operand with sum
            break;

        case '/':
            if (*n != 0)    // Check if operand is 0 and run only if operand is not equal to zero - to avoid divide by zero errors
            {
                *s /= *n;   // Divide sum by operand
            } else {
                printf("Cannot divide by zero\n");
            }
            break;

        case '^':
            *s = pow(*s, *n); // Raise sum to the power of n, could possible also do a raise n to the power of sum 
            break;

        case '%':
            *s *= -1;       // Invert sum by multplying it by -1
            break;

        case '#':
            if (!(*s < 0))  // Run this code block only if sum is not negative, to avoid imaginary numbers
            {
                *s = sqrt(*s);  // Take the square root of sum
            } else {
                printf("Cannot take the square root of a negative number\n");
            }
            break;

        case '!':   
            if (*s != 0)    // Run this code block as long as sum is not equal to 0, to avoid divide by zero errors
            {
                *s = 1.0 / *s;  // Divide 1 by sum
            } else {
                printf("Cannot divide by zero\n");
            }
            break;
        
        case 'q':
            // Do nothing
            break;
        
        default:
            exit(EXIT_FAILURE);  // Exit program and throw error
            break;
    }

    // Call print result function with pointer sum
    printResult(s);
}


// All logic contained in a single function called from main()
void runCalculator()
{

    double operand, sum; // Define variables to be used - Wonder if they should be named something with ptr...
    char operator = '\0'; // Initialize operator value to null terminator as to not confuse the while statement if the buffer randomly contains a valid operator / operand

    printOperations();

    while (operator != 'q')  // Run Calculator as long as the program is told by the user to quit
    {
        scanData(&operator, &operand); // First scan for data
        performNextOperation(&operator, &operand, &sum); // Then apply calculation
    }

    printf("Final result: %.4lf\n", sum);  // Print final result
}

int main(void)
{
    
    // Call calculator logic
    runCalculator();

    // Kill program
    return 0;
}