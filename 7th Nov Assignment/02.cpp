//2. Calculate the sum of array and subtract it from all the multiple of 2's 

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += arr[i];
    }

    cout << "Sum of the array elements: " << sum << endl;

    for (int i = 0; i < n; ++i) {
        if (arr[i] % 2 == 0) {  
            arr[i] -= sum;  
        }
    }

    cout << "Modified array after subtracting the sum from multiples of 2: ";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

