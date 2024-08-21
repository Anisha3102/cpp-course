// reverse of number



#include <bits/stdc++.h>
using namespace std;


int main()
{
    int arr[]={5,1,4,2,8};
    int revarray[5];
   
    for(int i=0;i<5;i++){
        revarray[i]=arr[5-i-1];
    }
    for(int i=0;i<5;i++){
        cout<<revarray[i]<<endl;
    }
      
   
     
    return 0;
}