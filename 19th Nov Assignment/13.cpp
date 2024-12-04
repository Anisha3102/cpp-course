//13. Create an array where each element is the cumulative sum up to that index.


#include<bits/stdc++.h>
using namespace std;

void cumulativeSum(int arr[], int size) {
    for (int i = 1; i < size; i++) {
        arr[i] += arr[i - 1]; 
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cumulativeSum(arr, size);  

    cout << "Array with cumulative sum: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";  
    }
    cout << endl;

    return 0;
}



