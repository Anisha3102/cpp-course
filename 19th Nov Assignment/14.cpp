//14. Remove a specific element from an array without using extra space.

#include<bits/stdc++.h>
using namespace std;

int removeElement(int arr[], int &size, int element) {
    int i = 0;
    
    while (i < size) {
        if (arr[i] == element) {
            
            for (int j = i; j < size - 1; j++) {
                arr[j] = arr[j + 1];
            }
            size--;  
        } else {
            i++;  
        }
    }
    return size;  
}

int main() {
    int arr[] = {12, 34, 5, 87, 23, 5, 56};
    int size = sizeof(arr) / sizeof(arr[0]);
    int elementToRemove = 5;

    cout << "Original array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    size = removeElement(arr, size, elementToRemove);  

    cout << "Array after removing " << elementToRemove << ": ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";  
    }
    cout << endl;

    return 0;
}


