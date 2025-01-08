//38 Write a program to find the number of even divisors for each element in the array.

#include<bits/stdc++.h>
using namespace std;

int countEvenDivisors(int num) {
    int count = 0;
    
    for (int i = 1; i <= num; ++i) {
        if (num % i == 0 && i % 2 == 0) {
            count++; 
        }
    }
    
    return count; 
}

int main() {
    vector<int> arr = {12, 15, 18, 20, 25};
    
    for (int num : arr) {
        cout << "Number of even divisors for " << num << " is: " << countEvenDivisors(num) << endl;
    }
    
    return 0;
}