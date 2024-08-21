
// count no. of elements making a sum

#include <bits/stdc++.h>
using namespace std;


int main()
{
    int arr[]={1,2,3,5,4};
    int count=0;
    for(int i=0;i<4;i++)
       for(int j=i+1;j<4;j++){
          if(arr[i]+arr[j]==7)
          {
            count++;}
       }
       cout<<count;
    return 0;
}