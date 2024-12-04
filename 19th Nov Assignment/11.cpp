//11. Extract all even numbers from an array.


#include<bits/stdc++.h>
using namespace std;

vector<int> extractEvenNumbers(int arr[], int size) {
    vector<int> evenNumbers;  
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            evenNumbers.push_back(arr[i]);          }
    }
    return evenNumbers;
}

int main() {
    int arr[] = {12, 34, 5, 87, 23, 56, 44};
    int size = sizeof(arr) / sizeof(arr[0]);

    vector<int> evenNumbers = extractEvenNumbers(arr, size);  

    cout << "Even numbers in the array: ";
    for (int num : evenNumbers) {
        cout << num << " ";  
    }
    cout << endl;

    return 0;
}



