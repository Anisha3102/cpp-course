//02
//Take 6 inputs from the user and calculate their average. If the average is greater than 20, call a function that finds the maximum value //in an array of integers. If the average is less than 20, call a function to find the minimum value in an array of floats. If the average //is exactly 20, call a function that takes an array of strings and returns the length of each string.




#include <bits/stdc++.h>
using namespace std;

int findMax()
{
    int n;
    cout << "Enter the size of array : ";
    cin >> n;

    int arr[n];

    int maxx = INT_MIN;
    cout << "Enter the elements of array\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] > maxx)
            maxx = arr[i];
    }

    return maxx;
}

int findMin()
{
    int n;
    cout << "Enter the size of array : ";
    cin >> n;

    int arr[n];

    int minn = INT_MAX;
    cout << "Enter the elements of array\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] < minn)
            minn = arr[i];
    }

    return minn;
}

vector<int> strLength()
{
    int n;
    cout << "Enter the size of array : ";
    cin >> n;

    string arr[n];
    vector<int> len(n);

    cout << "Enter the elements of array (String)\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        len[i] = arr[i].length();
    }

    return len;
}

int main()
{
    int n1, n2, n3, n4, n5, n6;
    cout << "Enter 6 integers : ";
    cin >> n1 >> n2 >> n3 >> n4 >> n5 >> n6;

    int sum = n1 + n2 + n3 + n4 + n5 + n6;
    float avg = sum / 6;

    if (avg > 20)
    {
        int maxx = findMax();
        cout << "Maximum : " << maxx;
    }
    else if (avg < 20)
    {
        int minn = findMin();
        cout << "Minimum : " << minn;
    }
    else
    {
        vector<int> len = strLength();
        cout << "Result : ";
        for (int i = 0; i < len.size(); i++)
        {
            cout << len[i] << "\t";
        }
    }

    return 0;
}
