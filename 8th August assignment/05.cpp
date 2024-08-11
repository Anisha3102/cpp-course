// Write a C++ function that takes two integers as input and uses nested if-else statements to determine if both numbers are positive,
// both are negative, or one is positive and the other is negative.

#include<bits/stdc++.h>
using namespace std;

string numbertype(int a,int b){
    if(a>0){
        if(b>0){
            return "both are positive";
        }
        else{
            return "one is negative and other is positive";
        }
    }
    else{
        if(b>0){
            return "one is positive and the other is negative";
        }
        else{
            return "both are negative";
        }
    }
}

int main(){
    int a,b;
    cout<<"enter two integers";
    cin>>a>>b;
    
    cout<<numbertype(a,b);
    
    return 0;
}