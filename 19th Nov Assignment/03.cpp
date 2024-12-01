//03. Calculate the sum of all elements in an array.


#include<bits/stdc++.h>
using namespace std;

int calculateSum(int arr[], int size) {
    int sum = 0;  
    for (int i = 0; i < size; i++) {
        sum += arr[i];  
    }
    return sum;
}

int main() {
    int arr[] = {12, 34, 5, 87, 23, 56};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    int sum = calculateSum(arr, size);
    cout << "The sum of all elements is: " << sum << endl;
    
    return 0;
}



