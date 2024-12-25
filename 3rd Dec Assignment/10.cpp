//1.
//Given an array of integers, find the first duplicate element and return it. If no duplicate exists, return -1.
//Example:
//Input: [3, 5, 2, 4, 5, 2]
//Output: 5

#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {3, 5, 2, 4};
    unordered_set<int> seen;

    for (auto it : arr) {
       
        if (seen.find(it) != seen.end()) {
            cout << it << endl; 
            return 0;  
        }
        seen.insert(it); 
    }

    cout << "-1" << endl;  
    return 0;
}
