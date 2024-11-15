//10.find the second largest element of an array of integers.


#include <bits/stdc++.h>
using namespace std;


int findSecondLargest(int arr[], int size) {
    if (size < 2) {
        cout << "Array does not have enough elements." << endl;
        return -1;
    }

    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    for (int i = 0; i < size; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;  
            largest = arr[i];         
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];  
        }
    }

    if (secondLargest == INT_MIN) {
        cout << "No second largest element found." << endl;
        return -1; 
    }

    return secondLargest;
}

int main() {
    int arr[] = {12, 35, 1, 10, 34, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    int secondLargest = findSecondLargest(arr, size);

    if (secondLargest != -1) {
        cout << "The second largest element is " << secondLargest << endl;
    }

    return 0;
}

