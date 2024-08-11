// Write a C++ function that takes an integer as input and uses nested if-else statements to determine if the number is positive and even,
//  positive and odd, negative and even, or negative and odd.

#include<bits/stdc++.h> 
using namespace std;

string numbertype(int num){
    if(num==0){
        return "invalid";
    }
    if(num>0){
        if(num%2==0){
            return "postive even";
        }
        else{
            return "postive odd";
        }
    }
    else{
        if(num%2==0){
            return "negative even";
        }
        else{
            return "negative odd";
        }
        
    }
}

int main(){
    int a;
    cout<< "enter any number ";
    cin>> a;

    cout << numbertype(a);

    return 0;
}