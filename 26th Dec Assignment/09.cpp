//10 Write a program to check if each element in an array is a happy number or not.


#include <bits/stdc++.h>
using namespace std;


int get_sum_of_squares(int num) {
    int sum = 0;
    while (num > 0) {
        int digit = num % 10;  
        sum += digit * digit;  
        num /= 10;  
    }
    return sum;
}

bool is_happy_number(int num) {
    int slow = num, fast = num;
    
    while (fast != 1 && get_sum_of_squares(fast) != 1) {
        slow = get_sum_of_squares(slow);  
        fast = get_sum_of_squares(get_sum_of_squares(fast));  
        
        if (slow == fast) {  
            return false;
        }
    }
    return true; 
}

int main() {
    int arr[] = {19, 2, 23, 7, 4};  
    int size = sizeof(arr) / sizeof(arr[0]);  

    for (int i = 0; i < size; i++) {
        if (is_happy_number(arr[i])) {
            cout << arr[i] << " is a happy number." << endl;
        } else {
            cout << arr[i] << " is not a happy number." << endl;
        }
    }

    return 0;
}