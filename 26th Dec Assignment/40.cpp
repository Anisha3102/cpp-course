//40 Write a program to check if each element in an array is divisible by its index.

#include<bits/stdc++.h>
using namespace std;

void checkDivisibilityByIndex(const vector<int>& arr) {
    for (int i = 0; i < arr.size(); ++i) {
        if (i == 0) {
            cout << "Index 0 is not valid for divisibility check." << endl;
            continue; 
        }
        
        if (arr[i] % i == 0) {
            cout << "Element " << arr[i] << " at index " << i << " is divisible by " << i << endl;
        } else {
            cout << "Element " << arr[i] << " at index " << i << " is NOT divisible by " << i << endl;
        }
    }
}

int main() {

    vector<int> arr = {10, 20, 30, 40, 50, 60};

    checkDivisibilityByIndex(arr);
    
    return 0;
}