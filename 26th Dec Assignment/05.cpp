//01 Write a program to check if each element in an array is a perfect number

#include <bits/stdc++.h>
using namespace std;

bool isPerfectNumber(int num) {
    if (num <= 1) return false;  

    int sum = 0;
    
    for (int i = 1; i <= num / 2; ++i) {
        if (num % i == 0) {
            sum += i;
        }
    }
   
    return sum == num;
}

int main() {
    vector<int> arr = {6, 28, 12, 496, 10, 8128}; 

    for (int num : arr) {
        if (isPerfectNumber(num)) {
            cout << num << " is a perfect number." << endl;
        } else {
            cout << num << " is not a perfect number." << endl;
        }
    }

    return 0;
}

