// 2.A person wants to save a total of X rupees by depositing an amount that doubles every day, starting from 1 rupee.
// Write a program to find out how many days it will take to save at least X rupees.

#include<bits/stdc++.h>
using namespace std;

int main(){
    int x;
    cout<<"Enter the amount : ";
    cin>>x;
    
    int day=1;
    int rupees=1;
    
    while(rupees<x){
        rupees=2*rupees;
        day++;
    }
    
    cout<<day;
    
    return 0;
}

