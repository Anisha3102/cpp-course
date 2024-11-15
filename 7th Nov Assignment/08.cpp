//8.Given an array of integers if any one of element is even return true else false


#include <bits/stdc++.h>
using namespace std;

bool hasEvenElement(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {  
            return true;  
        }
    }
    return false;  
}

int main() {
    int arr[] = {3, 7, 9, 11, 8};  
    int size = sizeof(arr) / sizeof(arr[0]);  

    bool result = hasEvenElement(arr, size);

    if (result) {
        cout << "There is at least one even element." << endl;
    } else {
        cout << "There are no even elements." << endl;
    }

    return 0;
}



