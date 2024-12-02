//06. Write a function to reverse the elements of an array.


#include<bits/stdc++.h>
using namespace std;

void reverseArray(int arr[], int size) {
    int start = 0;  
    int end = size - 1;  
    
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        
        start++;
        end--;
    }
}

int main() {
    int arr[] = {12, 34, 5, 87, 23, 56};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    cout << "Original array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    reverseArray(arr, size);  
    
    cout << "Reversed array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}
