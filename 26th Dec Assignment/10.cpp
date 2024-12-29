//10 Write a program to check if each element in an array is a perfect square or not.

#include <bits/stdc++.h>
using namespace std;

bool is_perfect_square(int num) {
    if (num < 0) {
        return false;  
    }
    int root = static_cast<int>(sqrt(num));  
    return root * root == num;  
}

int main() {
    int arr[] = {16, 25, 36, 14, 18};  
    int size = sizeof(arr) / sizeof(arr[0]);  

    
    for (int i = 0; i < size; i++) {
        if (is_perfect_square(arr[i])) {
            cout << arr[i] << " is a perfect square." << endl;
        } else {
            cout << arr[i] << " is not a perfect square." << endl;
        }
    }

    return 0;
}