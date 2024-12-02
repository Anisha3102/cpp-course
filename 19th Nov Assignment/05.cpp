//05. Determine if there are any duplicate elements in an array.

#include<bits/stdc++.h>
using namespace std;

bool hasDuplicates(int arr[], int size) {
    unordered_set<int> seen;  
    for (int i = 0; i < size; i++) {
        if (seen.find(arr[i]) != seen.end()) {
            return true;          }
        seen.insert(arr[i]);  
    }
    return false; 
}

int main() {
    int arr[] = {12, 34, 5, 87, 23, 5, 56};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    if (hasDuplicates(arr, size)) {
        cout << "There are duplicate elements in the array." << endl;
    } else {
        cout << "There are no duplicate elements in the array." << endl;
    }
    
    return 0;
}

