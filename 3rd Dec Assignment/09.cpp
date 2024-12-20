
#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 2;
    
    
    if (k < 0 || k >= n) {
        cout << "Invalid position" << endl;
        return 0;  
    }
    
    for (int i = k; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    
    for (int i = 0; i < n-1; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;  
    
    return 0;
}

