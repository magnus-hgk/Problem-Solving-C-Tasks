#include <stdio.h>

/*
    Programmer: Magnus Høgh             Date: 17-09-2025
    Instructor: Anders Schlichtkrull    Class: AAU Imperative Programming E25
    Evaluate two given numbers and operations performed on them
 */

int main(void)
{
    int a, b;
    printf("Input a: ");
    scanf("\n%d", &a);
    printf("Input b: ");
    scanf("\n%d", &b);

    printf("%d / %d = %d\n",  a, b, a / b);
    printf("%d / %d = %d\n",  b, a, b / a);
    printf("%d %% %d = %d\n", a, b, a % b);
    printf("%d %% %d = %d\n", b, a, b % a);
}