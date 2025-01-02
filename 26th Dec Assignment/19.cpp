//19 Write a program to check if each element in an array is divisible by the sum of its digits.

#include<bits/stdc++.h>
using namespace std;

int sumOfDigits(int num) {
    int sum = 0;
  
    num = abs(num);
    
   
    while (num > 0) {
        sum += num % 10;  
        num /= 10;         
    }
    
    return sum;
}

int main() {
   
    vector<int> arr = {12, 23, 45, 68, 91, 100};

    for (int num : arr) {
        int sumDigits = sumOfDigits(num); 
        if (sumDigits != 0 && num % sumDigits == 0) {  
            cout << num << " is divisible by the sum of its digits (" << sumDigits << ")." << endl;
        } else {
            cout << num << " is not divisible by the sum of its digits (" << sumDigits << ")." << endl;
        }
    }

    return 0;
}