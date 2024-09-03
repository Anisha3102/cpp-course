// 10. Find the Median of a Sorted Array
// o Explanation: Compute the middle value or average of middle values in a sorted
// array.
// o Given Array: {1, 3, 3, 6, 7, 8, 9}
// o Expected Result: 6

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[]= {1, 3, 3, 6, 7, 8, 9};
     int n = sizeof(arr)/sizeof(arr[0]);
    
        cout<<arr[n/2];

    return 0;
}
