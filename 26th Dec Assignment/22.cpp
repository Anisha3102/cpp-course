//22 Write a program to find the LCM (least common multiple) of each element and its index.


#include<bits/stdc++.h>
using namespace std;

int findGCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int findLCM(int a, int b) {
    return (a * b) / findGCD(a, b);
}

int main() {
   
    vector<int> arr = {3, 6, 8, 15, 20};

    for (int i = 0; i < arr.size(); ++i) {
        int element = arr[i];
        int index = i + 1;  
        int lcm = findLCM(element, index);
        cout << "LCM of element " << element << " at index " << index << " is: " << lcm << endl;
    }

    return 0;
}