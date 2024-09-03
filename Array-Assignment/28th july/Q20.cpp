// 20. Find the Missing Number in an Array of n-1 Elements
// o Explanation: Identify the missing number from an array containing n-1 elements
// ranging from 1 to n.
// o Given Array: {1, 2, 4, 5}
// o Expected Result: 3



#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[4] = {1, 2, 4, 5};

    int n = sizeof(arr) / sizeof(arr[0]);

    int arrSum = 0;
    for (int i = 0; i < n; i++)
    {
        arrSum += arr[i];
    }

    int sum = (n + 1) * (n + 2) / 2;

    int miss = sum - arrSum;

    cout << miss;

    return 0;
}



