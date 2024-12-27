
//04 Write a program to check if each element in an array is a Fibonacci number or not.

#include <bits/stdc++.h>
using namespace std;

bool isPerfectSquare(int num) {
    int sqrtNum = static_cast<int>(sqrt(num));
    return (sqrtNum * sqrtNum == num);
}


bool isFibonacciNumber(int num) {
    
    return isPerfectSquare(5 * num * num + 4) || isPerfectSquare(5 * num * num - 4);
}

int main() {
    vector<int> arr = {0, 1, 4, 7, 13, 22, 34, 55, 89};  
    for (int num : arr) {
        if (isFibonacciNumber(num)) {
            cout << num << " is a Fibonacci number." << endl;
        } else {
            cout << num << " is not a Fibonacci number." << endl;
        }
    }

    return 0;
}


