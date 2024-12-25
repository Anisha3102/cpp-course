// Given an array of integers, find the first duplicate element and return it. If no duplicate exists, return -1.
// Example:
// Input: [3, 5, 2, 4, 5, 2]
// Output: 5



#include <bits/stdc++.h>
using namespace std;

int main() {
   int arr[] = {3, 5, 2, 4};  
    int n = sizeof(arr) / sizeof(arr[0]);  
    for (int i = 0; i < n; i++) {
        int absVal = abs(arr[i]);  
        if (arr[absVal - 1] < 0) {
            cout << absVal << endl; 
            return 0; 
        }

        arr[absVal - 1] = -arr[absVal - 1];
    }

    cout << "-1" << endl;

    return 0;
    
}


