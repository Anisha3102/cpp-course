//05
//Take 5 inputs from the user and calculate their sum. If the sum is greater than 75, call a function that counts the number of vowels in //an array of strings. If the sum is less than 75, call a function to find the sum of the first and last elements in an array of integers. //If the sum is exactly 75, call a function that takes an array of floats and returns an array containing only the numbers greater than //the average of the array.



#include <bits/stdc++.h>
using namespace std;

int countVowel()
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

    int vowel = 0;
    for (int i = 0; i < n; i++)
    {
        for (char ch : arr[i])
        {
            if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' || ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowel++;
        }
    }

    return vowel;
}

int sumFirstLast()
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

    int sum = arr[0] + arr[n - 1];

    return sum;
}

vector<float> greaterArr()
{
    int n;
    cout << "Enter the size of array : ";
    cin >> n;

    float arr[n];
    vector<float> greaterAvgArr(n);

    cout << "Enter the elements of array\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    float sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    float avg = sum / n;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > avg)
            greaterAvgArr.push_back(arr[i]);
    }

    return greaterAvgArr;
}

int main()
{
    int n1, n2, n3, n4, n5;
    cout << "Enter 5 integers : ";
    cin >> n1 >> n2 >> n3 >> n4 >> n5;

    int sum = n1 + n2 + n3 + n4 + n5;

    if (sum > 75)
    {
        int vowel = countVowel();
        cout << "Vowels : " << vowel;
    }
    else if (sum < 75)
    {
        int sum = sumFirstLast();
        cout << "Sum of first and last element of the array is " << sum;
    }
    else
    {
        vector<float> arr = greaterArr();
        for (int i = 0; i < arr.size(); i++)
        {
            cout << arr[i] << "\t";
        }
    }

    return 0;
}

