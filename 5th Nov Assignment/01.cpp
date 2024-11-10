//  add all the non diagonal elements of 2d vector

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;  
    cout << "Enter the size of the square matrix: ";
    cin >> n;

    vector<vector<int>> matrix(n, vector<int>(n));

    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> matrix[i][j];
        }
    }

    int sum = 0;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
    
            if (i != j) {
                sum += matrix[i][j];
            }
        }
    }

    cout << "Sum of non-diagonal elements: " << sum << endl;

    return 0;
}
