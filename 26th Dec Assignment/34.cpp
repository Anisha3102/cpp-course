//34 Write a program to find the sum of the prime factors of each element in an array.

#include<bits/stdc++.h>
using namespace std;

int sumOfPrimeFactors(int num) {
    int sum = 0;
    
    while (num % 2 == 0) {
        sum += 2;
        num /= 2;
    }

    for (int i = 3; i * i <= num; i += 2) {
        while (num % i == 0) {
            sum += i;
            num /= i;
        }
    }

    if (num > 2) {
        sum += num;
    }

    return sum;
}

int main() {
    int arr[] = {12, 18, 30, 35, 50};
    int size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < size; ++i) {
        cout << "Sum of prime factors of " << arr[i] << " is: " << sumOfPrimeFactors(arr[i]) << endl;
    }

    return 0;
}

