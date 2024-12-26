//01 Write a program to check if each element in an array is a prime number or not.

#include <bits/stdc++.h>
using namespace std;

bool isPrime(int num) {
    if (num <= 1) {
        return false;    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false; 
        }
    }
    return true; 
}

int main() {
    int n;
       cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

       for (int i = 0; i < n; i++) {
        if (isPrime(arr[i])) {
            cout << arr[i] << " is a prime number." << endl;
        } else {
            cout << arr[i] << " is not a prime number." << endl;
        }
    }

    return 0;
}

