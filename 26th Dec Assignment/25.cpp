//25 Write a program to replace each element with the difference between the maximum and minimum element of the array.


#include<bits/stdc++.h>
using namespace std;

void replaceWithDifference(vector<int>& arr) {
    int maxElement = *max_element(arr.begin(), arr.end());
    int minElement = *min_element(arr.begin(), arr.end());

    int difference = maxElement - minElement;

    for (int i = 0; i < arr.size(); ++i) {
        arr[i] = difference;
    }
}

int main() {
    vector<int> arr = {2, 3, 1, 5, 4};

    cout << "Original array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    replaceWithDifference(arr);

    cout << "Array after replacement: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}