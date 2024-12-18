
#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {2, 4, 6, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 5;  
    int k = 2;
    
    
    if (k < 0 || k >= n) {
        cout << "Invalid position" << endl;
        return 0;  
    }
    
    for (int i = n; i > k; i--) {
        arr[i] = arr[i - 1];
    }

    arr[k] = x;

    for (int i = 0; i < n+1; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;  
    
    return 0;
}

