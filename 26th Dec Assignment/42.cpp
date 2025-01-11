//42 Write a program to replace each element in the array with its square root (if it’s a perfect square).

#include<bits/stdc++.h>
using namespace std;

void replaceWithSquareRoot(vector<int>& arr) {
    for (int i = 0; i < arr.size(); ++i) {
        int num = arr[i];
        int sqrtNum = static_cast<int>(sqrt(num)); 

        if (sqrtNum * sqrtNum == num) {
            
            arr[i] = sqrtNum;
        }
    }
}

int main() {
   
    vector<int> arr = {16, 25, 30, 36, 50, 81, 100, 2};

    replaceWithSquareRoot(arr);

    cout << "Modified array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}