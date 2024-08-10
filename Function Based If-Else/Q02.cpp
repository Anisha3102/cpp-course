//Q2
// Create a C++ function that takes a student's percentage as an argument and returns their corresponding grade (A, B, C, etc.) using if-else statements.


#include<bits/stdc++.h>
using namespace std;
char grade(float percentage){
    if(percentage>=90){
        return 'A';
    }
    else if(percentage>=80 && percentage<90){
        return 'B';
    }
   else if(percentage>=70 && percentage<80){
        return 'C'
   }
    else{
        return 'D';
    }
}

int main(){
    float percentage;
    cout<< "enter the percentage";
    cin>>percentage;

    cout<<grade(percentage);
    
    return 0;
}

