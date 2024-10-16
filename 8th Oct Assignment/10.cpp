//10. swap left side of array with right side considering middle element and maintain the order

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7};
    int n = arr.size();

    int mid = n / 2;

    reverse(arr.begin(), arr.begin() + mid);
    reverse(arr.begin() + mid + 1, arr.end());
    reverse(arr.begin(), arr.end());

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }
}


