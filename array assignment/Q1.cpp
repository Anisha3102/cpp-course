// Create an array of integers with a size specified by
// the user.

#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cout << "Enter the size of array : ";
    cin >> n;

    int arr[n];

    cout << "Enter the elements of array : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Given Array : { ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "  ";
    }
    cout << "}";


    return 0;
}