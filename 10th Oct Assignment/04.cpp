//04
//Take 7 inputs from the user and calculate their average. If the average is greater than 30, call a function that counts the number of //odd numbers in an array. If the average is less than 30, call a function to find the sum of all positive numbers in an array of floats. //If the average is exactly 30, call a function that takes an array of integers and returns an array with each element multiplied by 2.


#include <bits/stdc++.h>
using namespace std;

int countOdd()
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
        if (arr[i] % 2 == 1)
            count++;
    }

    return count;
}

int positiveSum()
{
    int n;
    cout << "Enter the size of array : ";
    cin >> n;

    float arr[n];
    float sum = 0;

    cout << "Enter the elements of array\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] > 0)
            sum += arr[i];
    }

    return sum;
}

vector<int> arrayMultiply2()
{
    int n;
    cout << "Enter the size of array : ";
    cin >> n;

    int arr[n];
    vector<int> arrx2(n);

    cout << "Enter the elements of array\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        arrx2[i] = arr[i] * 2;
    }

    return arrx2;
}

int main()
{
    int n1, n2, n3, n4, n5, n6, n7;
    cout << "Enter 7 integers : ";
    cin >> n1 >> n2 >> n3 >> n4 >> n5 >> n6 >> n7;

    int sum = n1 + n2 + n3 + n4 + n5 + n6 + n7;
    float avg = sum / 7;

    if (avg > 30)
    {
        int odd = countOdd();
        cout << "Even numbers in array : " << odd;
    }
    else if (avg < 30)
    {
        int sum = positiveSum();
        cout << "Sum of all positive numbers in the array : " << sum;
    }
    else
    {
        vector<int> arrx2 = arrayMultiply2();
        cout << "Result : ";
        for (int i = 0; i < arrx2.size(); i++)
        {
            cout << arrx2[i] << "\t";
        }
    }

    return 0;
}



