
//20. Find the element that appears more than n/2 times in the array, if it exists.


#include<bits/stdc++.h>
using namespace std;

int findMajorityElement(int arr[], int size) {
    int candidate = -1;
    int count = 0;

        for (int i = 0; i < size; i++) {
        if (count == 0) {
            candidate = arr[i];          }
        count += (arr[i] == candidate) ? 1 : -1;  
    }

    count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] == candidate) {
            count++;
        }
    }

        if (count > size / 2) {
        return candidate;
    } else {
        return -1;  
    }
}

int main() {
    int arr[] = {3, 3, 4, 2, 4, 4, 2, 4, 4};
    int size = sizeof(arr) / sizeof(arr[0]);

    int majority = findMajorityElement(arr, size);

    if (majority != -1) {
        cout << "The majority element is: " << majority << endl;
    } else {
        cout << "No majority element exists." << endl;
    }

    return 0;
}

