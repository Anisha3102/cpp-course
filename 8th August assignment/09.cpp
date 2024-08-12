// Write a C++ function that takes an integer as input and 
// uses nested if-else statements to determine if the number is a power of 2 or not.

#include<bits/stdc++.h>
using namespace std;

string powerof2(int a){
    if(a<=0){
        return "invalid input";
    }
    else{
        
            if(ceil(log2(a))==floor(log2(a))){
                return "power of two";
            }
            else{
                return "not power of two";
            }
        }
    }


int main(){
    int a;
    cout<<"enter a number";
    cin>>a;
    
    cout<< powerof2(a);
    
    return 0;
}