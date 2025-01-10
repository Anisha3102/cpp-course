//39 Write a program to replace each element in the array with the number of digits it contains.

#include<bits/stdc++.h>
using namespace std;

int countDigits(int num) {
    if (num == 0) return 1; 
    return static_cast<int>(log10(abs(num))) + 1;
}

void replaceWithDigitsCount(vector<int>& arr) {
    
    for (int i = 0; i < arr.size(); ++i) {
        
        arr[i] = countDigits(arr[i]);
    }
}

int main() {
    
    vector<int> arr = {123, 45, 6789, 0, -256, 7890};
    
    replaceWithDigitsCount(arr);
    
    cout << "Modified array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}