#include <bits/stdc++.h>
using namespace std;


int main()
{
    int arr1[]={1,3,5};
    int n1 = sizeof(arr1)/sizeof(arr1[0]);
    
     int arr2[]={2,4,6};
    int n2 = sizeof(arr2)/sizeof(arr2[0]);
   
   int arr[n1+n2];
   
   int i=0;
   int j=0;
   int k=0;
    
    while(i<n1 && j<n2){
        if(arr1[i]<arr2[j]){
            arr[k]=arr1[i];
            i++;
            k++;
        }
        else{
        arr[k]=arr2[j];
        j++;
        k++;
        }
    }
    
    while(i<n1){
        arr[k]=arr1[i];
        k++;
        i++;
    }
    
     while(j<n2){
        arr[k]=arr2[j];
        k++;
        j++;
    }
    
    for(int k=0;k<n1+n2;k++){
        cout<<arr[k];
    }
    
    return 0;
}


