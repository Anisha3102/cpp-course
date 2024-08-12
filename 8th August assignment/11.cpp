// Write a C++ function that takes three integers as input and uses nested if-else statements to determine if they form an arithmetic progression (AP),
// geometric progression (GP), or neither.


#include <bits/stdc++.h>
using namespace std;

string checkProgression(int a, int b, int c) {
    if (a == b && b == c) {
        return "The numbers form an Arithmetic Progression (AP) and a Geometric Progression (GP).";
    } 
    else {
    
        if (2 * b == a + c) {
            return "The numbers form an Arithmetic Progression (AP)." ;
        } else {
            
            if (a != 0 && c != 0 && b * b == a * c) {
                return  "The numbers form a Geometric Progression (GP)." ;
            } else {
                return "The numbers form neither an Arithmetic Progression (AP) nor a Geometric Progression (GP)." ;
            }
        }
    }
}

int main() {
    int a, b, c;
    cout << "Enter three integers: ";
    cin >> a >> b >> c;

    cout<< checkProgression(a, b, c);

    return 0;
}
