
//08 You have a vector of integers and a map that stores the index of each integer in the
//vector. Write a program that finds the index of a target number in the vector using the map.



#include<bits/stdc++.h>
using namespace std;


int main() {
    
   vector<int> nums = {10, 20, 30, 40, 50, 60, 70};

    map<int, int> indexMap;

    for (int i = 0; i < nums.size(); ++i) {
        indexMap[nums[i]] = i;
    }

    int target;
    cout << "Enter the target number: ";
    cin >> target;

    if (indexMap.find(target) != indexMap.end()) {
        cout << "The index of " << target << " is: " << indexMap[target] << endl;
    } else {
        cout << "The number " << target << " is not in the vector." << endl;
    }


    return 0;
}

