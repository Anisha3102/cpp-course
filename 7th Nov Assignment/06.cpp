//06. find the common elements(intersection of two arrays).


#include <bits/stdc++.h>
using namespace std;


vector<int> findCommonElements(int arr1[], int size1, int arr2[], int size2) {
    unordered_set<int> set;    
    vector<int> common;        

    for (int i = 0; i < size1; i++) {
        set.insert(arr1[i]);
    }

    for (int i = 0; i < size2; i++) {
        if (set.find(arr2[i]) != set.end()) {  
            common.push_back(arr2[i]);
            set.erase(arr2[i]);  
        }
    }

    return common;
}

int main() {
    int arr1[] = {1, 2, 4, 5, 9};
    int arr2[] = {2, 3, 5, 7, 9};

    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    vector<int> common = findCommonElements(arr1, size1, arr2, size2);

    if (common.empty()) {
        cout << "No common elements found." << endl;
    } else {
        cout << "Common elements: ";
        for (int i = 0; i < common.size(); i++) {
            cout << common[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
