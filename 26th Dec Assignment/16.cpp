//16 Write a program to check if each element in an array is a multiple of 5 or not.

#include<bits/stdc++.h>
using namespace std;

int main() {
   
    vector<int> arr = {10, 23, 45, 68, 100, 7};

    cout << "Array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    for (int num : arr) {
        if (num % 5 == 0) {
            cout << num << " is a multiple of 5." << endl;
        } else {
            cout << num << " is not a multiple of 5." << endl;
        }
    }

    return 0;
}