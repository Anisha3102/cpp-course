// 8. Compute the Average of Elements in an Array
// o Explanation: Calculate the average value of all elements in the array.
// o Given Array: {1, 2, 3, 4, 5}
// o Expected Result: 3.0 (Average of 1, 2, 3, 4, and 5)

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[]={1,2,3,4,5};
    float sum=0;
     int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
         sum=(sum+arr[i]);
    }
    float avg=sum/n;
    cout<<avg;

    return 0;
}

