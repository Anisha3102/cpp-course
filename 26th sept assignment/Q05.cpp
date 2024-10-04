// 5.Write a program to calculate the factorial of a number N using loops, but the twist is that
// the program should skip calculating the factorial for all numbers divisible by 3.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    cout << "Enter n : ";
    cin >> n;
    
    int fact=1;
    for(int i=1;i<=n;i++){
        if(i%3!=0){
            fact*=i;
        }
    }
    cout<<fact;

    return 0;
}