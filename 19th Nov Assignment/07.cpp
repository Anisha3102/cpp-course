//07. Find the first occurrence of a given number in an array.

#include<bits/stdc++.h>
using namespace std;

int findFirstOccurrence(int arr[], int size, int num) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == num) {
            return i; 
        }
    }
    return -1;  
}

int main() {
    int arr[] = {12, 34, 5, 87, 23, 5, 56};
    int size = sizeof(arr) / sizeof(arr[0]);
    int num = 5;  
    int index = findFirstOccurrence(arr, size, num);
    
    if (index != -1) {
        cout << "The first occurrence of " << num << " is at index " << index << "." << endl;
    } else {
        cout << num << " is not found in the array." << endl;
    }
    
    return 0;
}


