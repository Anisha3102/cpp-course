//41 Write a program to check if each element in an array is a power of 3.

#include<bits/stdc++.h>
using namespace std;

bool isPowerOfThree(int num) {
    if (num <= 0) return false; 
    while (num % 3 == 0) {
        num /= 3;
    }
   
    return num == 1;
}

void checkPowersOfThree(const vector<int>& arr) {
    for (int num : arr) {
        if (isPowerOfThree(num)) {
            cout << "Element " << num << " is a power of 3." << endl;
        } else {
            cout << "Element " << num << " is NOT a power of 3." << endl;
        }
    }
}

int main() {
   
    vector<int> arr = {1, 3, 9, 27, 81, 2, 10, 15, 243};
   
    checkPowersOfThree(arr);
    
    return 0;
}