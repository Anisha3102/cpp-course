//14 Write a program to subtract the sum of digits of the next element from the sum of digits of the current element.


#include <bits/stdc++.h>
using namespace std;

int sumOfDigits(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;  
        num /= 10;  
    }
    return sum;
}


vector<int> subtractDigitsSums(const vector<int>& nums) {
    vector<int> result;
    int n = nums.size();
   
    for (int i = 0; i < n - 1; ++i) {
        int sumCurrent = sumOfDigits(nums[i]);  
        int sumNext = sumOfDigits(nums[i + 1]); 
        result.push_back(sumCurrent - sumNext);  
    }
    
  
    if (n > 0) {
        result.push_back(sumOfDigits(nums[n - 1]) - 0);  
    }
    
    return result;
}

int main() {
    vector<int> nums = {23, 45, 67, 89, 12};  
    vector<int> result = subtractDigitsSums(nums);
   
    cout << "Result after subtracting the sum of digits of the next element from the current element: " << endl;
    for (int res : result) {
        cout << res << " ";
    }
    cout << endl;

    return 0;
}