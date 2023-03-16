#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {
    double max, pieces, size, total, amount, exact;
    printf("What is the total lenght of the rebar? Default is 9m.\n>");
    scanf("%lf", &max);
    printf("How many pieces?\n>");
    scanf("%lf", &pieces);
    printf("What size?\n>");
    scanf("%lf", &size);
    total = pieces * size;
    amount = total/max;
    exact = ceil(amount);
    printf("Total steel needed is %lf\n", total);
    printf("Total amount of rebar neeed is %lf\n", amount);
    printf("Rounded to %lf\n", exact);
}
