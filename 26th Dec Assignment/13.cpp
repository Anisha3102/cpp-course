//13 Write a program to multiply each element in an array by its own digits.


#include <bits/stdc++.h>
using namespace std;

int productOfDigits(int num) {
    int product = 1;
    while (num > 0) {
        product *= (num % 10);  
        num /= 10;  
    }
    return product;
}

vector<int> multiplyByDigitsProduct(const vector<int>& nums) {
    vector<int> result;
    for (int num : nums) {
        int product = productOfDigits(num);  
        result.push_back(num * product);  
    }
    return result;
}

int main() {
    vector<int> nums = {23, 45, 67, 89, 12};  
    vector<int> result = multiplyByDigitsProduct(nums);
    
    cout << "Result after multiplying each element by the product of its digits: " << endl;
    for (int res : result) {
        cout << res << " ";
    }
    cout << endl;

    return 0;
}