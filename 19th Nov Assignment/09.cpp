
//09. Check if the array is sorted in ascending order.

#include<bits/stdc++.h>
using namespace std;

bool isSorted(int arr[], int size) {
        for (int i = 1; i < size; i++) {
        if (arr[i] < arr[i - 1]) {
            return false;  
        }
    }
    return true;  
}

int main() {
    int arr[] = {12, 23, 34, 56, 87};
    int size = sizeof(arr) / sizeof(arr[0]);

    if (isSorted(arr, size)) {
        cout << "The array is sorted in ascending order." << endl;
    } else {
        cout << "The array is not sorted in ascending order." << endl;
    }
    
    return 0;
}


