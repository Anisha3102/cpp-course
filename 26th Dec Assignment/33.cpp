//33 Write a program to find the common prime factors between each element and the index.


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

bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) return false;
    }
    return true;
}

void commonPrimeFactors(int num, int index) {
    int commonGCD = gcd(num, index);
    
    for (int i = 2; i <= commonGCD; ++i) {
        if (commonGCD % i == 0 && isPrime(i)) {
            cout << i << " ";
        }
    }
}

int main() {
    
    int arr[] = {12, 18, 30, 35, 50};
    int size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < size; ++i) {
        cout << "Common prime factors between " << arr[i] << " and index " << i << ": ";
        commonPrimeFactors(arr[i], i);
        cout << endl;
    }

    return 0;
}