//06
//Take 8 inputs from the user and calculate their average. If the average is greater than 40, call a function that counts the number of //occurrences of a specific character in an array of strings. If the average is less than 40, call a function to find the last occurrence //of a specific float in an array. If the average is exactly 40, call a function that takes an array of integers and returns an array //containing only the even numbers.



// 06

#include <bits/stdc++.h>
using namespace std;

int countOccurence()
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

    char key;
    cout << "Enter the character you want to count the occurence of : ";
    cin >> key;

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (char ch : arr[i])
        {
            if (ch == key)
                count++;
        }
    }

    return count;
}

int lastOccurence()
{
    int n;
    cout << "Enter the size of array : ";
    cin >> n;

    float arr[n];

    cout << "Enter the elements of array\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    float key;
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

vector<int> evenArr()
{
    int n;
    cout << "Enter the size of array : ";
    cin >> n;

    int arr[n];
    vector<int> arrEven;

    cout << "Enter the elements of array\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] % 2 == 0)
            arrEven.push_back(arr[i]);
    }

    return arrEven;
}

int main()
{
    int n1, n2, n3, n4, n5, n6, n7, n8;
    cout << "Enter 7 integers : ";
    cin >> n1 >> n2 >> n3 >> n4 >> n5 >> n6 >> n7 >> n8;

    int sum = n1 + n2 + n3 + n4 + n5 + n6 + n7 + n8;
    float avg = sum / 7;

    if (avg > 40)
    {
        int occurence = countOccurence();
        cout << "Occurence : " << occurence;
    }
    else if (avg < 40)
    {
        int last = lastOccurence();
        if (last != -1)
        {
            cout << "Last occurence : " << last;
            return 0;
        }
        cout << "Element does not exist in array";
    }
    else
    {
        vector<int> arrEven = evenArr();
        cout << "Result : ";
        for (int i = 0; i < arrEven.size(); i++)
        {
            cout << arrEven[i] << "\t";
        }
    }

    return 0;
}
