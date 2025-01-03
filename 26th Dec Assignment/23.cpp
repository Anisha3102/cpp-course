//23 Write a program to find the sum of the digits of elements at odd indices and even indices separately.

#include<bits/stdc++.h>
using namespace std;

int sumOfDigits(int arr[num] ) {
    int sum = 0;
    while (num != 0) {
        sum += num % 10;  
        num /= 10;        
    }
    return sum;
}

int main() {
    int n;
    
    cout << "Enter the number of elements: ";
    cin >> n;
    
    int arr[n];
    
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    int sumOddIndices = 0;
    int sumEvenIndices = 0;
    
    
    for (int i = 0; i < n; i++) {
        int digitSum = sumOfDigits(arr[i]); 
        if (i % 2 == 0) {
            sumEvenIndices += digitSum;  
        } else {
            sumOddIndices += digitSum;  
        }
    }

    cout << "Sum of digits at even indices: " << sumEvenIndices << endl;
    cout << "Sum of digits at odd indices: " << sumOddIndices << endl;
    
    return 0;
}