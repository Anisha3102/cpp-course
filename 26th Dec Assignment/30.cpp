//30 Write a program to check if each element in an array is a triangular number or not.


#include<bits/stdc++.h>
using namespace std;

bool isTriangular(int num) {

    if (num < 0) return false;

    int discriminant = 1 + 8 * num;
    int sqrtDiscriminant = sqrt(discriminant);

    return (sqrtDiscriminant * sqrtDiscriminant == discriminant) && ((-1 + sqrtDiscriminant) % 2 == 0);
}

int main() {
    
    vector<int> arr = {1, 3, 6, 10, 15, 20, 25, 28, 30};

    for (int num : arr) {
        if (isTriangular(num)) {
            cout << num << " is a triangular number." << endl;
        } else {
            cout << num << " is not a triangular number." << endl;
        }
    }

    return 0;
}