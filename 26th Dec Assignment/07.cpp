//07 Write a program to reverse the digits of each element in an array and store the result.

#include <bits/stdc++.h>
using namespace std;

int reverseDigits(int num) {
    int reversed = 0;
    while (num > 0) {
        reversed = reversed * 10 + (num % 10);  
        num /= 10;  
    }
    return reversed;
}

int main() {
  
    vector<int> arr = {123, 456, 789, 101, 202};
    
    vector<int> reversedArr;
   
    for (int num : arr) {
        reversedArr.push_back(reverseDigits(num));
    }

    cout << "Original array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    cout << "Reversed array: ";
    for (int num : reversedArr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}