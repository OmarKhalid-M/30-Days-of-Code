#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    cin >> n; 
    string tempName;    
    map<string, int> userPhoneForUserName; 
    for(int i = 0; i < n; i++){

        cin >> tempName;
        cin >> userPhoneForUserName[tempName];

    }

    
    
    while (cin >> tempName) { 
        
        if(userPhoneForUserName[tempName]){
            cout << tempName << '=' << userPhoneForUserName[tempName] << endl;
        }
        else{
            cout << "Not found"<< endl;
        }
    } 
    
    return 0;
}
