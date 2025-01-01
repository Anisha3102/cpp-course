//15 Write a program to find the greatest common divisor (GCD) of each element and its index.


#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {

    vector<int> arr = {24, 36, 48, 60, 72};

    cout << "Array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    for (int i = 0; i < arr.size(); i++) {
        int g = gcd(arr[i], i);  
        cout << "GCD of element " << arr[i] << " and index " << i << " is: " << g << endl;
    }

    return 0;
}