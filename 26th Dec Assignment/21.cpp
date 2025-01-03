//21 Write a program to reverse the entire array and then check if each element is a palindrome.


#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(int num) {
    string str = to_string(num); 
    string rev = str;           
    reverse(rev.begin(), rev.end()); 
    
    return str == rev; 
}

int main() {
   
    vector<int> arr = {121, 232, 123, 456, 787};

    cout << "Original Array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    reverse(arr.begin(), arr.end());

    cout << "Reversed Array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    
    cout << "Checking if each element is a palindrome:" << endl;
    for (int num : arr) {
        if (isPalindrome(num)) {
            cout << num << " is a palindrome." << endl;
        } else {
            cout << num << " is not a palindrome." << endl;
        }
    }

    return 0;
}
