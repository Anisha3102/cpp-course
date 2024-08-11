// Write a C++ function that takes an integer as input and 
// uses nested if-else statements to determine if the number is within a specific range (e.g., 1-100) and if it is divisible by 7.

#include<bits/stdc++.h>
using namespace std;

string divisibleby7(int k){
    if(k>=1 && k<=100){
        if(k%7==0){
            return "divisible by 7";
        }
        else {
            return "not divisible by 7";
        }
        
    }
    else{
        return "invalid input";
    }
}

int main(){
    int k;
    cout << "enter a number ";
    cin>> k;
    
    cout<<divisibleby7(k);
    
    return 0;
}