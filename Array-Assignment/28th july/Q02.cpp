// 2. Reverse an Array
// o Explanation: Reverse the order of elements in the array.
// o Given Array: {1, 2, 3, 4, 5}
// o Expected Array: {5, 4, 3, 2, 1}

#include <bits/stdc++.h>
using namespace std;


int main()
{
    int arr[]={1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int revarray[n];
   
    for(int i=0;i<n;i++){
        revarray[i]=arr[n-i-1];
    }
    for(int i=0;i<n;i++){
        cout<<revarray[i]<<endl;
    }
      
   
     
    return 0;
}
