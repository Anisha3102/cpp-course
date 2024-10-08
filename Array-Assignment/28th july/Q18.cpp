// 18. Find the Largest Sum of a Contiguous Subarray
// o Explanation: Determine the maximum sum of any contiguous subarray.
// o Given Array: {34, -50, 42, 14, -5, 86}
// o Expected Result: 137




#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[6] = {34, -50, 42, 14, -5, 86};

    int maxSum = 0;
    int sum = 0;

    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        if (sum > maxSum)
            maxSum = sum;
        if (sum < 0)
            sum = 0;
    }

    cout << maxSum;

    return 0;
}
