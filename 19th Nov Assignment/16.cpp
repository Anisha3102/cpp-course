//16. Check if the array reads the same forwards and backwards.


#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(int arr[], int size) {
    int start = 0;  
    int end = size - 1;  
    

    while (start < end) {
        if (arr[start] != arr[end]) {
            return false;  
        }
        start++;
        end--;  
    }
    
    return true;  
}

int main() {
    int arr[] = {1, 2, 3, 2, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    if (isPalindrome(arr, size)) {
        cout << "The array is a palindrome." << endl;
    } else {
        cout << "The array is not a palindrome." << endl;
    }

    return 0;
}


