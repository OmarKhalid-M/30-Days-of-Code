#include <bits/stdc++.h>
#include <iostream>

using namespace std;



int main()
{
    int number;
    cin >> number;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for(int loopCounter = 1; loopCounter <= 10; loopCounter++){

        cout << number << " x " << loopCounter << " = " << number*loopCounter << endl;

    }

    return 0;
}
