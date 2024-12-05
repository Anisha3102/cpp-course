
//12. Extract all odd numbers from an array.


#include<bits/stdc++.h>
using namespace std;

vector<int> extractOddNumbers(int arr[], int size) {
    vector<int> oddNumbers;  
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 != 0) {
            oddNumbers.push_back(arr[i]);  
        }
    }
    return oddNumbers;
}

int main() {
    int arr[] = {12, 34, 5, 87, 23, 56, 44};
    int size = sizeof(arr) / sizeof(arr[0]);

    vector<int> oddNumbers = extractOddNumbers(arr, size);  
    cout << "Odd numbers in the array: ";
    for (int num : oddNumbers) {
        cout << num << " ";  
    }
    cout << endl;

    return 0;
}

