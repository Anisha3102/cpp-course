// 01
//Take 5 inputs from the user and calculate their sum. If the sum is greater than 50, call a function that counts the number of //occurrences of a specific integer in an array. If the sum is less than 50, call a function to find the last occurrence of a specific //integer in an array. If the sum is exactly 50, call a function that takes an array of integers and returns an array containing the //squares of each element.


#include <bits/stdc++.h>
using namespace std;

int countOccurence()
{
    int n;
    cout << "Enter the size of array : ";
    cin >> n;

    int arr[n];

    cout << "Enter the elements of array\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int key;
    cout << "Enter the element you want to count the occurence of : ";
    cin >> key;

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
            count++;
    }

    return count;
}

int lastOccurence()
{
    int n;
    cout << "Enter the size of array : ";
    cin >> n;

    int arr[n];

    cout << "Enter the elements of array\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int key;
    cout << "Enter the element you want to know the last occurence of : ";
    cin >> key;

    int index = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
            index = i;
    }

    return index;
}

vector<int> arraySquare()
{
    int n;
    cout << "Enter the size of array : ";
    cin >> n;

    int arr[n];
    vector<int> arrSq(n);

    cout << "Enter the elements of array\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        arrSq[i] = arr[i] * arr[i];
    }

    return arrSq;
}

int main()
{
    int n1, n2, n3, n4, n5;
    cout << "Enter 5 integers : ";
    cin >> n1 >> n2 >> n3 >> n4 >> n5;

    int sum = n1 + n2 + n3 + n4 + n5;

    if (sum > 50)
    {
        int occurence = countOccurence();
        cout << "Occurence of the given number is " << occurence;
    }
    else if (sum < 50)
    {
        int last = lastOccurence();
        if (last != -1)
        {
            cout << "Last occurence at index " << last;
            return 0;
        }
        cout << "Element doesn't exist";
    }
    else
    {
        vector<int> arr = arraySquare();
        cout << "Result\n";
        for (int i = 0; i < arr.size(); i++)
        {
            cout << arr[i] << "\t";
        }
    }

    return 0;
}
