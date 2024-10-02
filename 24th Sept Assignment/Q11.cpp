// 11. Geometric Progression
// Sequence: 1, 3, 9, 27, 81, ...
// Formulation: a = 1, b = a * 3
// Problem: Calculate the nth term where each term is triple the previous.

#include<bits/stdc++.h>
using namespace std;

int main()
{   
    int arr[20];
    arr[0]=1;
    arr[1]=3;
   
    for(int i=2;i<20;i++){
       arr[i]=arr[i-1]*3;
    }
    for(int i=0;i<20;i++){
        cout<<arr[i]<<" ";
    }
}

