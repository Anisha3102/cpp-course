//32 Write a program to find the maximum and minimum elements at odd indices separately in an array.


#include<bits/stdc++.h>
using namespace std;

void findMaxMinAtOddIndices(const vector<int>& arr, int& maxOdd, int& minOdd) {
    maxOdd = INT_MIN;  
    minOdd = INT_MAX;  
    for (int i = 1; i < arr.size(); i += 2) {
        
        if (arr[i] > maxOdd) {
            maxOdd = arr[i];
        }
        if (arr[i] < minOdd) {
            minOdd = arr[i];
        }
    }
}

int main() {

    vector<int> arr = {10, 20, 30, 40, 50, 60, 70, 80};

    int maxOdd, minOdd;

    findMaxMinAtOddIndices(arr, maxOdd, minOdd);

    cout << "Maximum element at odd indices: " << maxOdd << endl;
    cout << "Minimum element at odd indices: " << minOdd << endl;

    return 0;
}