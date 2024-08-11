// Write a C++ function that takes a float as input and uses nested if-else statements to determine if the number is positive,
// negative, or zero, and whether it is a whole number or a fraction.

#include<bits/stdc++.h>
using namespace std;

string numbertype(float a){
    if(a==0){
        return "zero";
    }
    if(a>0){
        if(ceil(a)==floor(a)){
            return "postive natural number";
        }
        else {
            return "positive fractional number";
        }
    }
    else{
        if(ceil(a)==floor(a)){
            return "negative  number";
        }
        else {
            return "negative fractional number";
        }
        
    }
}

int main(){
    float a;
    cout<<"enter a float number";
    cin>> a;
    
    cout<<numbertype(a);
    
    return 0;
}