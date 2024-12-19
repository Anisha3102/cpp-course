
// Write a program to left-rotate the elements of an array by one position.

// [1, 2, 3, 4, 5]
// [2, 3, 4, 5, 1



#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    
    int firstElement = arr[0];

    for (int i = 0; i < arr.size() - 1; i++) {
        arr[i] = arr[i + 1];
    }

    arr[arr.size() - 1] = firstElement;
    
    cout << "Array after left rotation: ";
    for (int i = 0; i < arr.size(); ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
