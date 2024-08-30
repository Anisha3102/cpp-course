// 3. Remove Duplicates from a Sorted Array
// o Explanation: Remove duplicates and return the unique elements.
// o Given Array: {1, 1, 2, 3, 3, 4}
// o Expected Array: {1, 2, 3, 4}

#include <bits/stdc++.h>
using namespace std;


int main()
{
    int arr[]={1,1,2,3,3,4};
    int i=0;
    int n = sizeof(arr)/sizeof(arr[0]);
    
     for (int j = 1; j < n; j++)
        {
            if (arr[i] != arr[j])
            {
                i++;
                arr[i] = arr[j];
            }
        }
       for (int j = 0; j <=i; j++){
           cout<<arr[j];
       }
    
    return 0;
}


