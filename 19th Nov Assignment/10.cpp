
//10. Replace all negative numbers in an array with 0.


#include<bits/stdc++.h>
using namespace std;

void replaceNegativeWithZero(int arr[], int size) {
      for (int i = 0; i < size; i++) {
        if (arr[i] < 0) {
            arr[i] = 0;  
        }
    }
}

int main() {
    int arr[] = {12, -5, 34, -87, 23, -56};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    replaceNegativeWithZero(arr, size);  
    cout << "Modified array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
