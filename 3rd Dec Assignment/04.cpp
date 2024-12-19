
//Write a program to check if an array is a palindrome (reads the same forwards and backwards).

//[1, 2, 3, 2, 1]



#include<bits/stdc++.h>
using namespace std;

int main() {
    
     vector<int> arr = {1, 2, 3, 2, 1};

    bool isPalindrome = true;
    int n = arr.size();

    for (int i = 0; i < n / 2; i++) {
        if (arr[i] != arr[n - 1 - i]) {
            isPalindrome = false; 
            break;
        }
    }

    if (isPalindrome) {
        cout << "The array is a palindrome." << endl;
    } else {
        cout << "The array is not a palindrome." << endl;
    }

    return 0;
}
