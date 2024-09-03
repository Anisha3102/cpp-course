7. Rotate an Array to the Right by k Steps
o Explanation: Shift all elements to the right by k positions.
o Given Array: {1, 2, 3, 4, 5}
o Rotation (k = 2):
o Expected Array: {4, 5, 1, 2, 3}


#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums = {1, 2, 3, 4, 5};
    int k = 2;

    int n = nums.size();
    k = k % n;
    reverse(nums.begin(), nums.end());
    reverse(nums.begin(), nums.begin() + k);
    reverse(nums.begin() + k, nums.end());

    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << "\t";
    }

    return 0;
}
