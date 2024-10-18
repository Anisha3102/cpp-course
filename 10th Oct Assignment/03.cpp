//03
//Take 4 inputs from the user and calculate their sum. If the sum is greater than 100, call a function that counts the number of even //numbers in an array. If the sum is less than 100, call a function to find the first occurrence of a specific string in an array. If the //sum is exactly 100, call a function that takes an array of integers and returns the product of all elements.



#include <bits/stdc++.h>
using namespace std;

int countEven()
{
    int n;
    cout << "Enter the size of array : ";
    cin >> n;

    int arr[n];

    int count = 0;
    cout << "Enter the elements of array\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] % 2 == 0)
            count++;
    }

    return count;
}

int firstOccurence()
{
    int n;
    cout << "Enter the size of array : ";
    cin >> n;

    string arr[n];

    cout << "Enter the elements of array (String)\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    string key;
    cout << "Enter the element you want to know the last occurence of : ";
    cin >> key;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }

    return -1;
}

int arrayProduct()
{
    int n;
    cout << "Enter the size of array : ";
    cin >> n;

    int arr[n], arrSq[n];

    int prod = 1;
    cout << "Enter the elements of array\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        prod *= arr[i];
    }

    return prod;
}

int main()
{
    int n1, n2, n3, n4;
    cout << "Enter 4 integers : ";
    cin >> n1 >> n2 >> n3 >> n4;

    int sum = n1 + n2 + n3 + n4;

    if (sum > 100)
    {
        int even = countEven();
        cout << "Even numbers in array : " << even;
    }
    else if (sum < 100)
    {
        int occurence = firstOccurence();
        if (occurence != -1)
        {
            cout << "First occurence : " << occurence;
            return 0;
        }
        cout << "Element does not exist in array";
    }
    else
    {
        int prod = arrayProduct();
        cout << "Product : " << prod;
    }

    return 0;
}




