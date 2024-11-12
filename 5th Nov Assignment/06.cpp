//  add all the even values and odd positon values and find the absolute difference difference bw them 
//0 1 2 3 4 5 6 7 8


#include <bits/stdc++.h>
using namespace std;

int main() {
   int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8};
    int n = sizeof(arr) / sizeof(arr[0]);  
    
    int evenSum = 0;
    int oddPositionSum = 0;
    
    for (int i = 0; i < n; ++i) {
        if (arr[i] % 2 == 0) {  
            evenSum += arr[i];
        }
        if (i % 2 != 0) { 
            oddPositionSum += arr[i];
        }
    }

    int difference = abs(evenSum - oddPositionSum);

    cout << "Sum of even values: " << evenSum << endl;
    cout << "Sum of values at odd positions: " << oddPositionSum << endl;
    cout << "Absolute difference: " << difference << endl;

    return 0;
}


