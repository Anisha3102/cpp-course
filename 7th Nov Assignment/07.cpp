// 7.Given an array of integers check if every element of an array stastify a condition like all
// numbers of an array is even then return true otherwise false.

#include <bits/stdc++.h>
using namespace std;

bool areAllEven(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 != 0) { 
            return false; 
        }
    }
    return true; 
}

int main() {
    int arr[] = {2, 4, 6, 8, 10}; 
    int size = sizeof(arr) / sizeof(arr[0]); 

    bool result = areAllEven(arr, size);

    if (result) {
        cout << "All elements are even." << endl;
    } else {
        cout << "Not all elements are even." << endl;
    }

    return 0;
}
