
// Write a program to search for an element x in an array. If found, print its position; otherwise,
// print "Not Found."

// Array = [5, 8, 1, 4, 7], Search = 4


#include<bits/stdc++.h>
using namespace std;

int main() {
     vector<int> arr = {5, 8, 1, 4, 7};

    int x = 4;

    
    int position = 0; 


    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == x) {
            position = i; 
            break;
        }
    }

    if (position != 0) {
        cout << "Element " << x << " found at position " << position << "." << endl;
    } else {
        cout << "Not Found." << endl;
    }

    return 0;
}
