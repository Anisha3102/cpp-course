//15. Count how many elements in the array are greater than a given value X.


#include<bits/stdc++.h>
using namespace std;

int countGreaterThanX(int arr[], int size, int X) {
    int count = 0; 
    
    for (int i = 0; i < size; i++) {
        if (arr[i] > X) {
            count++;  
        }
    }
    
    return count;  
}

int main() {
    int arr[] = {12, 34, 5, 87, 23, 56, 44};
    int size = sizeof(arr) / sizeof(arr[0]);
    int X = 20;

    int result = countGreaterThanX(arr, size, X); 

    cout << "Number of elements greater than " << X << ": " << result << endl;

    return 0;
}


