//3.Remove duplicate from an array [1,1,1,2,2,3,4].

#include <bits/stdc++.h>
using namespace std;

int main() {
   int arr[] = {1, 1, 1, 2, 2, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    sort(arr, arr + n);

    int uniqueCount = 0;
    for (int i = 0; i < n; ++i) {
        if (i == 0 || arr[i] != arr[i - 1]) {
            arr[uniqueCount++] = arr[i];
        }
    }

    cout << "Array without duplicates: ";
    for (int i = 0; i < uniqueCount; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

