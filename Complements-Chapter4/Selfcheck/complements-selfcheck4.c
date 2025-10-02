/*
    Programmer: Magnus Høgh             Date: 02-10-2025
    Instructor: Anders Schlichtkrull    Class: AAU Imperative Programming E25
    Write complements to these 4 experssions
*/
#include <stdio.h>

int main(void)
{
    int a = 6,
    b = 9,
    c = 14,
    flag = 1;

    printf("%s\n",     c == a + b || !flag         ? "True":"False");
    printf("%s\n",     a != 7 && flag || c >= 6    ? "True":"False");
    printf("%s\n",     !(b <= 12) && a % 2 == 0    ? "True":"False");
    printf("%s\n",     !(a > 5 || c < a + b)       ? "True":"False");
    printf("\n");
    printf("%s\n",     c != a + b && flag           ? "True":"False");
    printf("%s\n",     a == 7 || flag && c < 6      ? "True":"False");
    printf("%s\n",     b > 12 || a % 2 != 0         ? "True":"False");
    printf("%s\n",     a <= 5 && c >= a + b         ? "True":"False");
}
    