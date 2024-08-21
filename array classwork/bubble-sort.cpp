// bubble sort



#include <bits/stdc++.h>
using namespace std;


int main()
{
    int arr[]={5,1,4,2,8};
   
    for(int i=0;i<5;i++){
      for(int j=i+1;j<5;j++){
        if(arr[i]>arr[j]){
          int c=arr[i];
          arr[i]=arr[j];
          arr[j]=c;
        }
      }
    }
    for(int i=0;i<5;i++){
        cout<<arr[i];
    }
      
   
     
    return 0;
}