
// Find the smallest missing positive integer in an unsorted array.
// Array: [3, 4, -1, 1]

#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> arr = {3, 4, -1, 1};
    int n = arr.size();

    for (int i = 0; i < n; i++)
    {
        while (arr[i] > 0 && arr[i] <= n && arr[arr[i] - 1] != arr[i])
        {
            swap(arr[i], arr[arr[i] - 1]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] != i + 1)
        {
            cout << "Smallest missing positive integer: " << i + 1 << endl;
            return 0;
        }
    }

    cout << "Smallest missing positive integer: " << n + 1 << endl;

    return 0;
}
