//04. Count the occurrences of a specific number in an array.


#include<bits/stdc++.h>
using namespace std;

int countOccurrences(int arr[], int size, int num) {
    int count = 0;  
    for (int i = 0; i < size; i++) {
        if (arr[i] == num) {
            count++;  
        }
    }
    return count;
}

int main() {
    int arr[] = {12, 34, 5, 87, 23, 5, 56, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int num = 5;      
    int occurrences = countOccurrences(arr, size, num);
    cout << "The number " << num << " appears " << occurrences << " times in the array." << endl;
    
    return 0;
}
