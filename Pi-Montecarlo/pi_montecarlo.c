#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double monteCarlo(int n){
    int points_inside = 0;
    double x;
    double y;
    for (int i = 0; i < n; i++){
        x = rand() % 100 + 1.0;
        y = rand() % 100 + 1.0;
        if (sqrt(pow(x,2)+(pow(y,2)))<=100.0){
            points_inside++;
            // printf("Points inside: %d",points_inside);
        }
    }
    return 4.0 * (double)points_inside / (double)n;
}

int main(void)
{
    int iterations = 0;
    printf("To approximate pi enter number of iterations to run through.\nIterations: ");
    scanf("%d", &iterations);
    double pi = monteCarlo(iterations);
    printf("Pi is approximately: %f\n", pi);
    return 0;
}