//24 Write a program to check if each element in the array is a divisor of the next element.


#include<bits/stdc++.h>
using namespace std;

bool isDivisor(int a, int b) {
    return b % a == 0;
}

int main() {
    
    int arr[] = {2, 4, 8, 16, 32};
    int n = sizeof(arr) / sizeof(arr[0]);

    bool isValid = true;
    for (int i = 0; i < n - 1; ++i) {
        if (!isDivisor(arr[i], arr[i + 1])) {
            isValid = false;
            cout << arr[i] << " is not a divisor of " << arr[i + 1] << endl;
        }
    }

    if (isValid) {
        cout << "Each element is a divisor of the next element." << endl;
    }

    return 0;
}
