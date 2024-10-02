// 10.Double Product Sequence
// Sequence: 1, 3, 6, 36 ...
// Formulation: a = 1, b = 3, c = a * b * 2
// Problem: Find the nth term where each term is the product of the previous two, doubled.

#include<bits/stdc++.h>
using namespace std;

int main()
{   
    int arr[20];
    arr[0]=1;
    arr[1]=3;
   
    for(int i=2;i<20;i++){
       arr[i]=arr[i-2]*arr[i-1]*2;
    }
    for(int i=0;i<20;i++){
        cout<<arr[i]<<" ";
    }
}

