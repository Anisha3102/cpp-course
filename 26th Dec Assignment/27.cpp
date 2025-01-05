//27 Write a program to find the sum of elements at even indices in an array.

#include<bits/stdc++.h>
using namespace std;

int sumEvenIndices(const vector<int>& arr) {
    int sum = 0;

    for (int i = 0; i < arr.size(); i += 2) {
        sum += arr[i];
    }

    return sum;
}

int main() {
   
    vector<int> arr = {10, 20, 30, 40, 50, 60, 70};

    int result = sumEvenIndices(arr);

    cout << "Sum of elements at even indices: " << result << endl;

    return 0;
}