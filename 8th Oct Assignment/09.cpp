//9. swap 5th element of array with 3rd element 

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {1, 4, 6, 2, 5, 3};
    int n = arr.size();

    int temp = arr[2];
    arr[2] = arr[4];
    arr[4] = temp;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }
}

