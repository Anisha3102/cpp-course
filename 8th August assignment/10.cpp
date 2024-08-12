// Write a C++ function that takes a character as input and
// uses nested if-else statements to determine if it is a digit, uppercase letter, lowercase letter, or a special character.

#include<bits/stdc++.h>
using namespace std;

string type(char a){
    if(isalpha(a)){
        if(isupper(a)){
            return "uppercase letter";
        }
        else{
            return "lowercase letter";
        }
    }
    else if(isdigit(a)){
        return "digit";
    }
    else {
        return "special character";
    }
    
    }


int main(){
    char a;
    cout<<"enter something";
    cin>>a;
    
    cout<< type(a);
    
    return 0;
}