//  [1,2,3,4,5,6,7,8,9] convert this array into 2d vector 

#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    int rows = 3;
    int cols = 3;

    vector<vector<int>> matrix(rows, vector<int>(cols));

    int index = 0;  
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            matrix[i][j] = arr[index++];
        }
    }

    cout << "2D Vector (Matrix):" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}


