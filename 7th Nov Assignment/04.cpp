//4.Reverse an array 

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
    
    int start = 0;
    int end = n - 1;

    while (start < end) {
       
        swap(arr[start], arr[end]);

        start++;
        end--;
    }

    cout << "Reversed array: ";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}



