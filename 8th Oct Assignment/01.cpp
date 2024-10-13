//1. find max of array

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {1, 4, 6, 2, 5, 3};
    int n = arr.size();

    int maxx = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > maxx)
        {
            maxx = arr[i];
        }
    }

    cout << maxx;
}



