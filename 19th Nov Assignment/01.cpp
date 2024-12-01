//01. Write a function to find the largest element in an array.

#include<bits/stdc++.h>
using namespace std;

int findLargest(int arr[], int size) {
    int largest = arr[0]; 
    for (int i = 1; i < size; i++) {
        if (arr[i] > largest) {
            largest = arr[i]; 
        }
    }
    return largest;
}

int main() {
    int arr[] = {12, 34, 5, 87, 23, 56};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    int largest = findLargest(arr, size);
    cout << "The largest element is: " << largest << endl;
    
    return 0;
}
