//36 Write a program to find the sum of even numbers and the product of odd numbers in an array.

#include<bits/stdc++.h>
using namespace std;

int main() {
   
    int arr[] = {12, 15, 8, 20, 7, 14};
    int size = sizeof(arr) / sizeof(arr[0]);

    int sumEven = 0;  
    int productOdd = 1; 
    bool foundOdd = false;  
    for (int i = 0; i < size; ++i) {
        if (arr[i] % 2 == 0) { 
            sumEven += arr[i];  
        } else {  
            productOdd *= arr[i];  
            foundOdd = true;
        }
    }

    cout << "Sum of even numbers: " << sumEven << endl;
    if (foundOdd) {
        cout << "Product of odd numbers: " << productOdd << endl;
    } else {
        cout << "No odd numbers found in the array." << endl;
    }

    return 0;
}