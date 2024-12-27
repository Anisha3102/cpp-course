//03 Write a program to check if each element in an array is a strong number or not.

#include <bits/stdc++.h>
using namespace std;

int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; ++i) {
        fact *= i;
    }
    return fact;
}

bool isStrongNumber(int num) {
    int sum = 0;
    int originalNum = num;

    while (num > 0) {
        int digit = num % 10;
        sum += factorial(digit);
        num /= 10;
    }

    return sum == originalNum;
}

int main() {
    vector<int> arr = {1, 2, 145, 40585, 10, 100}; 

    for (int num : arr) {
        if (isStrongNumber(num)) {
            cout << num << " is a strong number." << endl;
        } else {
            cout << num << " is not a strong number." << endl;
        }
    }

    return 0;
}