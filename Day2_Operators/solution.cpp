#include <bits/stdc++.h>
#include <cmath>
#include <iostream>

using namespace std;

// Complete the solve function below.
void solve(double meal_cost, int tip_percent, int tax_percent) {

    double tip = ((tip_percent* meal_cost) / 100);
    double tax = ((tax_percent* meal_cost) / 100);
    cout << round(meal_cost + tip + tax) << endl;
}


int main(){

    solve(15.50 , 15 , 10);
    return 0;
}