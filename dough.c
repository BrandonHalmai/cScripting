#include <stdio.h>
#include <stdlib.h>

int main () {
    double flour, water, yeast, salt;
    printf("How much flour?\n800g of flour is for two large pizzas.\n>");
    scanf("%lf", &flour);
    printf("What is the water percentage? Typically this should be 70%%\n>");
    scanf("%lf", &water);
    yeast = 0.04*flour;
    salt = 0.02*flour;
    printf("Flour is %lf\nWater is %lf\nYeast if %lf\nSalt is %lf", flour, water, yeast, salt);
}