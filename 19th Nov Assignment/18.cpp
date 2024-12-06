//18. Find the missing number in an array of size n−1 containing numbers from 1 to n.


#include<bits/stdc++.h>
using namespace std;

int findMissingNumber(int arr[], int size) {
    int n = size + 1;  
    int expectedSum = n * (n + 1) / 2;  
    int actualSum = 0;
    
    
    for (int i = 0; i < size; i++) {
        actualSum += arr[i];
    }
    
    return expectedSum - actualSum;
}

int main() {
    int arr[] = {1, 2, 4, 5, 6};  
    int size = sizeof(arr) / sizeof(arr[0]);

    int missingNumber = findMissingNumber(arr, size);
    cout << "The missing number is: " << missingNumber << endl;

    return 0;
}


