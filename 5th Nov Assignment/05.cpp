//  all the even positons of 1d array should be swapped with odd position


#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    for (int i = 0; i < arr.size() - 1; i += 2) {  
        swap(arr[i], arr[i + 1]);
    }

    cout << "Array after swapping even and odd positions:" << endl;
    for (int i = 0; i < arr.size(); ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}


