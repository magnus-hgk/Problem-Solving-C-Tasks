/*
    Programmer: Magnus Høgh             Date: 31-10-2025
    Instructor: Anders Schlichtkrull    Class: AAU Imperative Programming E25
    --= Live coding with Anders -- Output parameters =--
    Lets scale a lawn!
*/

#include <stdio.h>


void scale(int lawn_l, int lawn_w, int *new_lawn_l, int *new_lawn_w, int factor)
{
    *new_lawn_l = lawn_l * factor;
    *new_lawn_w = lawn_w * factor;
}


int main(void)
{
    int lawn_l, lawn_w, new_lawn_l, new_lawn_w, factor;

    printf("Please input lawn lenght: ");
    scanf("\n %d", &lawn_l);
    printf("Please input lawn width: ");
    scanf("\n %d", &lawn_w);
    printf("Please input scaling factor: ");
    scanf("\n %d", &factor);




    scale(lawn_l, lawn_w, &new_lawn_l, &new_lawn_w, factor);

    printf("New length: %d\nNew width: %d\n", new_lawn_l, new_lawn_w);

    return 0;
}