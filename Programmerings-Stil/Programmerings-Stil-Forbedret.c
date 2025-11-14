#include <stdio.h>  

/*
    Programmer: Magnus Høgh             Date: 17-09-2025
    Instructor: Anders Schlichtkrull    Class: AAU Imperative Programming E25
    Analyze, restructure and improve the given program
*/

int numbersAverage(int numbers)
{
    int j = numbers;
    // Definer i for at løkken kan køre
    int i;

    // Definer num, som float da vi skal dividere
    float nums[j];

    // Definer sum som 0,0 fordi det er en float og så vi kan bruge det i matematik
    float sum = 0.0;

    printf("The function of this program is to calculate the average of %d numbers\n", j);

    // Tag et input 3 gange, opdater sum for, hver løkke
    // Returner gennemsnittet af sum
    for (i = 0; i < j;i++){
        printf("Give me number %d: ", i+1);
        scanf("%f", &nums[i]);
        sum += nums[i];
    }
    printf("The average is: %f\n", sum / j);  
    return 0;
}


int main(void)
{
    // Printer resultatet som float, der er gennemsnittet af de 3 inputs fra threeNumberAverage
    // Hvad sker der hvis vi inputter 0, negative tal eller tekst?
    printf("How many numbers do you want to take the average of\nNumbers to average: ");
    int arraySize;
    scanf("%d", &arraySize);
    numbersAverage(arraySize);
    
    // Exit Code
    return 0;
}