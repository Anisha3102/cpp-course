//02. Write a function to find the smallest element in an array.

#include<bits/stdc++.h>
using namespace std;

int findSmallest(int arr[], int size) {
    int smallest = arr[0]; 
    for (int i = 1; i < size; i++) {
        if (arr[i] < smallest) {
            smallest = arr[i];         }
    }
    return smallest;
}

int main() {
    int arr[] = {12, 34, 5, 87, 23, 56};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    int smallest = findSmallest(arr, size);
    cout << "The smallest element is: " << smallest << endl;
    
    return 0;
}

