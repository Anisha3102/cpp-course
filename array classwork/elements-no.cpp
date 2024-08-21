// find the duplicate elements in an array



#include <bits/stdc++.h>
using namespace std;


int main()
{
    int arr[5],num,count=0;
    cout<<"Enter elements";
    for(int i=0;i<5;i++)
    cin>>arr[i];
    
    cout<<"element";
    cin>>num;
    
    for(int j=0;j<5;j++)
     if(num==arr[j])
       count++;
     
     cout<<"no. of times "<<count;
     
    return 0;
}