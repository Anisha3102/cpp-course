// 9.Sum of Odd and Even Index Terms
// Sequence: 1, 2, 2, 4, 4, 8, 8,16,16, 32, 32 ...
// Formulation: a = 1, b = a + even index numbers
// DP Problem: Use dynamic programming to calculate the nth term where the pattern is 
// determined by the sum of even and odd indexed numbers.

#include<bits/stdc++.h>
using namespace std;

int main()
{   
    int arr[20];
    arr[0]=1;
    int j=1;
   
    for(int i=1;i<20;i++){
        if(i%2!=0){
           arr[i]=pow(2,j) ;
           j++;
        }
        else{
            arr[i]=arr[i-1];
        }
    }
    for(int i=0;i<20;i++){
        cout<<arr[i]<<" ";
    }
}


