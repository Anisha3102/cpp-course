//8. print reverse of array

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {1, 4, 6, 2, 5, 3};
    int n = arr.size();

    for (int i = n - 1; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }
}

