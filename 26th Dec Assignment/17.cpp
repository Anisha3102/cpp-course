//17 Write a program to calculate the sum of even elements and the sum of odd elements separately in an array. 


#include<bits/stdc++.h>
using namespace std;

int main() {
vector<int> arr = {10, 23, 45, 68, 100, 7, 21, 34};

    int evenSum = 0;
    int oddSum = 0;

    for (int num : arr) {
        if (num % 2 == 0) {
            evenSum += num;  
        } else {
            oddSum += num;   
        }
    }

    cout << "Sum of even elements: " << evenSum << endl;
    cout << "Sum of odd elements: " << oddSum << endl;

    return 0;
}
