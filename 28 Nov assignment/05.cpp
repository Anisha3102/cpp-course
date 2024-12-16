//05 Write a C++ function that takes a vector of integers and a target sum as parameters and 
// returns true if any two numbers in the vector add up to the target sum, otherwise returns false.


#include<bits/stdc++.h>
using namespace std;


bool hasPairWithSum(const vector<int>& nums, int target) {
    unordered_set<int> seen;

    for (int num : nums) {
        
        if (seen.find(target - num) != seen.end()) {
            return true; 
        }
    
        seen.insert(num);
    }

    return false;
}

int main() {
    vector<int> nums = {10, 15, 3, 7};
    int target = 17;

    if (hasPairWithSum(nums, target)) {
        cout << "True" << endl;
    } else {
        cout <<"False" << endl;
    }

    return 0;
}


