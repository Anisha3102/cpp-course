//09 Given a vector of integers, write a program to sort the vector in ascending order and remove 
//duplicate values using the unique method from the STL.



#include<bits/stdc++.h>
using namespace std;


int main() {
    
 vector<int> nums = {10, 20, 30, 20, 50, 10, 40, 30};

    sort(nums.begin(), nums.end());

    auto it = unique(nums.begin(), nums.end());

    nums.erase(it, nums.end());

    cout << "Sorted vector without duplicates: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
