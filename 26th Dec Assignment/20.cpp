//20 Write a program to calculate the cumulative sum of all elements in the array up to each index.

#include<bits/stdc++.h>
using namespace std;

int main() {

    vector<int> arr = {1, 2, 3, 4, 5};

    int cumulativeSum = 0;

    cout << "Cumulative sum of the array: ";
    for (int i = 0; i < arr.size(); i++) {
        cumulativeSum += arr[i]; 
        cout << cumulativeSum << " ";  
    }

    cout << endl;

    return 0;
}