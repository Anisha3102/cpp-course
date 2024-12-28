//08 Write a program to find the product of digits of each element in an array.

#include <bits/stdc++.h>
using namespace std;

int productOfDigits(int num) {
    int product = 1;  
    if (num == 0) return 0;
   
    while (num > 0) {
        product *= num % 10;  
        num /= 10;            
    }
    
    return product;
}

int main() {
   
    vector<int> arr = {123, 456, 789, 101, 202};
    
    for (int num : arr) {
        cout << "Product of digits of " << num << " is: " << productOfDigits(num) << endl;
    }

    return 0;
}