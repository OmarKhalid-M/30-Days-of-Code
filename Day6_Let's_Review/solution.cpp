#include <cmath>
#include <cstdio>
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    cin >> n;
    string s;
  
    while(n > 0){

        cin >> s;

        for(int i = 0; i < s.length() ; i++){
            if(0 == i%2){
                cout << s[i];
            }
        }
        cout << " " ;
        for(int i = 0; i < s.length() ; i++){
            if(0 != i%2){
            cout << s[i];
            }
        }
        cout << "\n";
        n--;
    }
    
    
    
    return 0;
}
