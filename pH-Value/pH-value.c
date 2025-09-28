/*
    Programmer: Magnus Høgh             Date: 28-09-2025
    Instructor: Anders Schlichtkrull    Class: AAU Imperative Programming E25
    Målet med opgaven er at træne din evne til at arbejde med nestede if-else konstrolstrukturer, herunder if-else kæder (multiple alternative if statements).
*/



#include <stdio.h>

int elseIfChain(double ph)
{
    if (ph <= 2) 
    {
        printf("Very acidic\n");  
    }      
    else if (ph < 7) 
    {
        printf("Acidic\n");       
    }
    else if (ph == 7)
    {
    printf("Neutral\n");
    }      
    else if (ph < 12)
    {
        printf("Alkaline\n");     
    }
    else 
    {
        printf("Very alkaline\n");
    }
    return 0;
}

int nestedIfElse(double ph)
{
      
    if (ph >= 2) // 2 - 6.99.. : Acidic
    {
        if (ph == 7) // 7 : Neutral
        {                
            printf("Neutral\n");
            return 0;
        } 
        if (ph > 7) // 7.001.. - 11.99.. : Alkaline
        {
            if (ph >= 12)   // >= 12 : Very alkaline                
            {
                printf("Very alkaline\n");
            } else {
                printf("Alkaline\n");
            }
        } else {
            printf("Acidic\n");
        }
    } else {
        printf("Very acidic\n"); // 0 - 1.99.. : Very Acidic
    }

    return 0;
}


int main(void)
{
    double ph;

    printf("Input pH value: ");
    scanf("\n %lf", &ph);

    nestedIfElse(ph);
    elseIfChain(ph);
    return 0;
}