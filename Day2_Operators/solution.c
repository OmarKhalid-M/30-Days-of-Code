#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


// Complete the solve function below.
void solve(double meal_cost, int tip_percent, int tax_percent) {

    double tip = ((tip_percent* meal_cost) / 100);
    double tax = ((tax_percent* meal_cost) / 100);
    printf("%0.0lf" , round(meal_cost + tip + tax));
}


int main(){


    solve(15.50 , 15, 10);

    return 0;
}
