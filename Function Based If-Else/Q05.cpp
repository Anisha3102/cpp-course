// Q5
// Create a C++ program that takes an integer as input and prints whether it is positive, negative, or zero using if-else statements (without return, with argument).

#include <bits/stdc++.h>
using namespace std;

void type(int k){
    if(k>0){
        cout<<"positive";
}
    else if(k<0){
        cout<<"negative";
    }
    else{
        cout<<"zero";
    }
}
int main()
{
    int k;
    cout << "Enter a number : ";
    cin >> k;
    type(k);
    

    return 0;
}
