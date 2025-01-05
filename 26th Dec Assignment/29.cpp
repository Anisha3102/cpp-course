//29 Write a program to find the sum of cubes of each element in the array.


#include<bits/stdc++.h>
using namespace std;

int sumOfCubes(const vector<int>& arr) {
    int sum = 0;
    
    for (int num : arr) {
        sum += num * num * num;  
    }
    
    return sum;
}

int main() {

    vector<int> arr = {1, 2, 3, 4, 5};

    int result = sumOfCubes(arr);

    cout << "Sum of cubes of each element: " << result << endl;

    return 0;
}