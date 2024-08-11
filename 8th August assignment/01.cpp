// Write a C++ function that takes a character as input and uses nested if-else statements 
// to determine if it is a vowel or consonant, considering both uppercase and lowercase letters.


#include<bits/stdc++.h>
using namespace std;

string vowelconsonant(char k){
    if(isalpha(k)){
        if(k=='a' || k=='e' || k=='i' || k=='o' || k=='u' || k=='A' || k=='E' || k=='I' || k=='O' || k=='U'){
            return "vowel";
        }
        else{
            return "consonant";
        }
    }
    else{
        return "invalid input";
    }
}
int main(){
    char k;
    cout<< "enter any character :";
    cin>> k;
    
    cout<< vowelconsonant(k);
    
    return 0;
}