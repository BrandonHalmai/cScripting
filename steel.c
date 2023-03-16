#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {
    double max, pieces, size, total, amount, exact;
    printf("How many pieces?\n>");
    scanf("%lf", &pieces);
    printf("What size?\n>");
    scanf("%lf", &size);
    total = pieces * size;
    amount = total/9;
    exact = ceil(amount);
    printf("Total steel needed is %lf\n", total);
    printf("Total amount of rebar neeed is %lf\n", amount);
    printf("Rounded to %lf\n", exact);
}
