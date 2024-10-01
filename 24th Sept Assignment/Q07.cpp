// 7.1 2 4 7 12 20...
// Variables: a=1, b=2, c=a+b+1
// Formula: The additon between consecutive terms increases by 1.

#include<bits/stdc++.h>
using namespace std;

int main()
{   
    int arr[20];
    arr[0]=1;
    arr[1]=2;
    
   
    for(int i=2;i<20;i++){
        arr[i]=arr[i-1]+arr[i-2]+1;
    }
    for(int i=0;i<20;i++){
        cout<<arr[i]<<" ";
    }
}
