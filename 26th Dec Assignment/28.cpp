//28 Write a program to calculate the factorial of the sum of digits of each element in the array.

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

long long factorial(int n) {
    long long result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= i;  
    }
    return result;
}

int main() {

    int arr[] = {123, 45, 678, 9};
    int size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < size; ++i) {
        int digitSum = sumOfDigits(arr[i]);
        long long fact = factorial(digitSum);
        cout << "For element " << arr[i] << ", sum of digits: " << digitSum
             << ", factorial of sum: " << fact << endl;
    }

    return 0;
}