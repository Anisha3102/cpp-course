//08. Find the last occurrence of a given number in an array.

#include<bits/stdc++.h>
using namespace std;

int findLastOccurrence(int arr[], int size, int num) {
        for (int i = size - 1; i >= 0; i--) {
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
    int index = findLastOccurrence(arr, size, num);
    
    if (index != -1) {
        cout << "The last occurrence of " << num << " is at index " << index << "." << endl;
    } else {
        cout << num << " is not found in the array." << endl;
    }
    
    return 0;
}


