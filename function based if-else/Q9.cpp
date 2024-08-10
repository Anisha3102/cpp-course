// To check a string is palindrome or not

#include <bits/stdc++.h>
using namespace std;

string isPalindrome(string str)
{
    int left = 0;
    int right = str.length() - 1;

    while (left < right)
    {
        if (str[left] != str[right])
        {
            return "String is not palindrome";
        }
        left++;
        right--;
    }
    return "String is palindrome";
}

int main()
{
    string input;
    cout << "Enter a string: ";
    cin >> input;

    cout << isPalindrome(input);

    return 0;
}
