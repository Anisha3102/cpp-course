//02 Write a program to check if each element in an array is an Armstrong number or not.


#include <bits/stdc++.h>
using namespace std;

bool isArmstrong(int num) {
    int originalNum = num;
    int sum = 0;
    int digits = 0;
    
   
    while (num > 0) {
        num /= 10;
        digits++;
    }

    num = originalNum;


    while (num > 0) {
        int digit = num % 10;
        sum += pow(digit, digits);
        num /= 10;
    }

    return sum == originalNum;
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
        if (isArmstrong(arr[i])) {
            cout << arr[i] << " is an Armstrong number." << endl;
        } else {
            cout << arr[i] << " is not an Armstrong number." << endl;
        }
    }

    return 0;
}