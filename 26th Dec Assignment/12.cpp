//12 Write a program to find the highest divisor of each element in an array.


#include <bits/stdc++.h>
using namespace std;

int highestDivisor(int num) {
    for (int i = num / 2; i >= 1; --i) {
        if (num % i == 0) {
            return i;
        }
    }
    return 1; 
}

vector<int> highestDivisors(const vector<int>& nums) {
    vector<int> result;
    for (int num : nums) {
        result.push_back(highestDivisor(num));
    }
    return result;
}

int main() {
    vector<int> nums = {12, 15, 18, 25, 30}; 
    vector<int> result = highestDivisors(nums);
    
    cout << "Highest divisors for each element in the array: " << endl;
    for (int res : result) {
        cout << res << " ";
    }
    cout << endl;

    return 0;
}