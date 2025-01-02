//18 Write a program to find the sum of squares of each element in the array.


#include<bits/stdc++.h>
using namespace std;

int main() {
   
    vector<int> arr = {1, 2, 3, 4, 5};

    int sumOfSquares = 0;

    for (int num : arr) {
        sumOfSquares += num * num;  
    }

    cout << "Sum of squares of each element: " << sumOfSquares << endl;

    return 0;
}