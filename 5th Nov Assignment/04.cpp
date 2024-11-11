//  [1,2,3,4,5,6,7,8,9] 
// b) perfect sqaure and based on that convert it into 2d array 3*3

#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    int n = arr.size();

    int sqrt_n = static_cast<int>(sqrt(n));
    if (sqrt_n * sqrt_n != n) {
        cout << "The number of elements is not a perfect square!" << endl;
        return 1;  
    }

    vector<vector<int>> matrix(sqrt_n, vector<int>(sqrt_n));

    int index = 0;
    for (int i = 0; i < sqrt_n; ++i) {
        for (int j = 0; j < sqrt_n; ++j) {
            matrix[i][j] = arr[index++];
        }
    }

    cout << "Converted 2D Matrix:" << endl;
    for (int i = 0; i < sqrt_n; ++i) {
        for (int j = 0; j < sqrt_n; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

