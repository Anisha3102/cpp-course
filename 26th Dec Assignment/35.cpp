//35 Write a program to calculate the product of the even elements in the array.

#include<bits/stdc++.h>
using namespace std;

int main() {
 
    int arr[] = {12, 15, 8, 20, 7, 14};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    int product = 1;  
    bool foundEven = false; 
    for (int i = 0; i < size; ++i) {
        if (arr[i] % 2 == 0) {  
            product *= arr[i];  
            foundEven = true;
        }
    }

    if (foundEven) {
        cout << "Product of even elements: " << product << endl;
    } else {
        cout << "No even elements found in the array." << endl;
    }

    return 0;
}
