// 5. Merge Two Sorted Arrays
// o Explanation: Combine two sorted arrays into one sorted array.
// o Given Arrays: {1, 3, 5} and {2, 4, 6}
// o Expected Array: {1, 2, 3, 4, 5, 6}

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


