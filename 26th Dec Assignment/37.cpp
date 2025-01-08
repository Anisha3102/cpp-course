//37 Write a program to replace each element in the array with its index squared.

#include<bits/stdc++.h>
using namespace std;

void replaceWithIndexSquared(vector<int>& arr) {
 
    for (int i = 0; i < arr.size(); ++i) {
        arr[i] = i * i;
    }
}

int main() {
    vector<int> arr = {5, 3, 7, 1, 9};  
    replaceWithIndexSquared(arr);
    
    cout << "Modified array: ";
    for (int i = 0; i < arr.size(); ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}