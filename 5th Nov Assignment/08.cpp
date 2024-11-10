//  [10,12,24,64,128,1024,125] extract power of 2 and return a new array [64,128,1024]

#include <bits/stdc++.h>
using namespace std;


   bool isPowerOfTwo(int n) {
    return (n > 0) && (n & (n - 1)) == 0;
}

int main() {

    vector<int> arr = {10, 12, 24, 64, 128, 1024, 125};

    vector<int> powerOfTwoNumbers;
    
    for (int num : arr) {
        if (isPowerOfTwo(num)) {
            powerOfTwoNumbers.push_back(num);
        }
    }

    cout << "Powers of 2 in the array: ";
    for (int num : powerOfTwoNumbers) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}


