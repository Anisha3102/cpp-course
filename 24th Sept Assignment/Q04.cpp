// 4. 1 2 4 8 32 ....
//      a=1 b=2 c= power of 2

#include<bits/stdc++.h>
using namespace std;

int main()
{   
    int arr[20];
   
    for(int i=0;i<20;i++){
        arr[i]=pow(2,i);
    }
    for(int i=0;i<20;i++){
        cout<<arr[i]<<" ";
    }
}

