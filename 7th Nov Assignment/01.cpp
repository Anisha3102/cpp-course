// 1. Find the minimum element from an array and count the number of occurence of minimum element
// from an array.

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;

    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int minElement = INT_MAX;
    int count = 0;             

   
    for (int i = 0; i < n; i++) {
        if (arr[i] < minElement) {
            minElement = arr[i]; 
            count = 1;           
        } else if (arr[i] == minElement) {
            count++;            
        }
    }

    cout << "Minimum element: " << minElement << endl;
    cout << "Occurrences of minimum element: " << count << endl;

    return 0;
}
