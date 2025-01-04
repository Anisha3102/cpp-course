//26 Write a program to check if each element in the array is a power of 2.

#include<bits/stdc++.h>
using namespace std;

bool isPowerOfTwo(int num) {
   
    return (num > 0) && (num & (num - 1)) == 0;
}

int main() {
   
    vector<int> arr = {1, 2, 3, 4, 5, 8, 16, 18};

    for (int num : arr) {
        if (isPowerOfTwo(num)) {
            cout << num << " is a power of 2." << endl;
        } else {
            cout << num << " is not a power of 2." << endl;
        }
    }

    return 0;
}