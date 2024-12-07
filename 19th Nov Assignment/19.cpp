//19. Merge two sorted arrays into a single sorted array (without extra sorting).


#include<bits/stdc++.h>
using namespace std;


vector<int> mergeSortedArrays(int arr1[], int arr2[], int size1, int size2) {
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

    vector<int> mergedArray = mergeSortedArrays(arr1, arr2, size1, size2);

    cout << "Merged array: ";
    for (int num : mergedArray) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}


