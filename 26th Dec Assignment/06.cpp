//06 Write a program to find the sum of digits of each element in an array.

#include <bits/stdc++.h>
using namespace std;

int sumOfDigits(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;  
        num /= 10;         
    }
    return sum;
}

int main() {
    
    vector<int> arr = {123, 456, 789, 101, 202};

    
    for (int num : arr) {
        cout << "Sum of digits of " << num << " is: " << sumOfDigits(num) << endl;
    }

    return 0;
}