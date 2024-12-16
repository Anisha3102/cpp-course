
//04 Given an array of integers, convert it into a vector and print the sum of all elements using
// a for loop.

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    vector<int> vec(arr, arr + sizeof(arr) / sizeof(arr[0]));

    int sum = 0;

    for (int i = 0; i < vec.size(); i++) {
        sum += vec[i];
    }
    
    cout << "Sum of all elements: " << sum << endl;

    return 0;
}
