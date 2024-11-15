//9.concate two arrays which are already sorted 


#include <bits/stdc++.h>
using namespace std;



vector<int> concatenateSortedArrays(int arr1[], int size1, int arr2[], int size2) {
    vector<int> merged; 
    int i = 0, j = 0;

    while (i < size1 && j < size2) {
        if (arr1[i] < arr2[j]) {
            merged.push_back(arr1[i]);
            i++;
        } else {
            merged.push_back(arr2[j]);
            j++;
        }
    }

    while (i < size1) {
        merged.push_back(arr1[i]);
        i++;
    }

    while (j < size2) {
        merged.push_back(arr2[j]);
        j++;
    }

    return merged;
}

int main() {
    int arr1[] = {1, 3, 5, 7};
    int arr2[] = {2, 4, 6, 8};

    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    vector<int> merged = concatenateSortedArrays(arr1, size1, arr2, size2);

    cout << "Merged sorted array: [";
    for (size_t i = 0; i < merged.size(); i++) {
        cout << merged[i];
        if (i != merged.size() - 1) {
            cout << ", ";
        }
    }
    cout << "]" << endl;

    return 0;
}

