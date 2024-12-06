
//17. Move all zeroes in an array to the end while maintaining the order of other elements.

#include<bits/stdc++.h>
using namespace std;

void moveZeroesToEnd(int arr[], int size) {
    int lastNonZeroFoundAt = 0;  


    for (int i = 0; i < size; i++) {
        if (arr[i] != 0) {
            arr[lastNonZeroFoundAt] = arr[i];  
            if (i != lastNonZeroFoundAt) {
                arr[i] = 0;  
            }
            lastNonZeroFoundAt++;  
        }
    }
}

int main() {
    int arr[] = {0, 1, 9, 0, 4, 2, 0};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    moveZeroesToEnd(arr, size); 

    cout << "Array after moving zeroes to the end: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

