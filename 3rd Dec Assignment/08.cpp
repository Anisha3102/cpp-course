
// Move all zeros in an array to the end without changing the order of non-zero elements.  
// Array: [0, 5, 0, 3, 4, 0, 1]
// Output: [5, 3, 4, 1, 0, 0, 0]



#include<bits/stdc++.h>
using namespace std;

int main() {
 
    vector<int> arr = {0, 5, 0, 3, 4, 0, 1};
    
    int n = arr.size();
    int j = 0; 
    
    for (int i = 1; i < n; i++) {
        if (arr[i] != 0) {
            
            swap(arr[i], arr[j]);
            j++; 
        }
    }
    
    cout << "Array after moving zeros: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;

}
