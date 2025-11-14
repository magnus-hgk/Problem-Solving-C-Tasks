#include <stdio.h>

int main(void)
{
    /*
    Expand to take vectors of any dimension as input 
    Expand to do cross product
    Expand to output new vectors
    */
    printf("Input 4 numbers: \n");
    double a[2] = {scanf("%lf"),scanf("%lf")};
    double b[2] = {scanf("%lf"),scanf("%lf")};
    printf("\n%lf\n",a[0]*b[0]+a[1]*b[1]);
}