// 1. 1 1 2 3 5 8 13 .....
//     a=1 b=1 c =a+b 


#include<bits/stdc++.h>
using namespace std;

int main()
{   
    int arr[20];
    arr[0]=1;
    arr[1]=1;
    
    
    for(int i=2;i<20;i++){
        arr[i]=arr[i-1]+arr[i-2];
    }
    for(int i=0;i<20;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
