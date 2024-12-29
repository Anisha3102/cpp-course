//11 Write a program to check if each element in an array is a palindrome string or not.

#include <bits/stdc++.h>
using namespace std;

bool is_palindrome(string str) {
    int left = 0, right = str.length() - 1;
    
    while (left < right) {
        if (str[left] != str[right]) {
            return false;  
        }
        left++;
        right--;
    }
    return true;  
}

int main() {
    string arr[] = {"madam", "hello", "racecar", "world", "level"}; 
    int size = sizeof(arr) / sizeof(arr[0]);  

    for (int i = 0; i < size; i++) {
        if (is_palindrome(arr[i])) {
            cout << arr[i] << " is a palindrome." << endl;
        } else {
            cout << arr[i] << " is not a palindrome." << endl;
        }
    }

    return 0;
}