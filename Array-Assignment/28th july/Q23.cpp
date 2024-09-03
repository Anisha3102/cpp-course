// 23. Find the Kth Largest Element in an Array
// o Explanation: Determine the Kth largest element in an unsorted array.
// o Given Array: {3, 2, 1, 5, 6, 4}
// o K: 2
// o Expected Result: 5

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {3,2,1,5,6,4};
    int k;
     cout<<"Enter value of k";
     cin>>k;


    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

  cout << arr[n-k] << "\t";
  
  return 0;
}

