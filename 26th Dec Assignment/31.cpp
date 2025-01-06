//31 Write a program to check if each element in an array is divisible by the sum of its digits.


#include<bits/stdc++.h>
using namespace std;

int sumOfDigits(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;  
        num /= 10;        
    }
    return sum;
}

bool isDivisibleBySumOfDigits(int num) {
    int sum = sumOfDigits(num);
    if (sum == 0) return false;  
    return num % sum == 0;  
}

int main() {
    vector<int> arr = {12, 15, 18, 21, 23, 36};

    for (int num : arr) {
        if (isDivisibleBySumOfDigits(num)) {
            cout << num << " is divisible by the sum of its digits." << endl;
        } else {
            cout << num << " is not divisible by the sum of its digits." << endl;
        }
    }

    return 0;
}