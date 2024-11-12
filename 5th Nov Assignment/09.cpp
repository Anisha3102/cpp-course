// [6,12,18,24.36,40] even no of elements ka array lena hai and each corresponding values ka
// hcf nikalna hai aur usko ek naye array mai store karna hai


#include <bits/stdc++.h>
using namespace std;


 int findHCF(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;  
        a = temp;
    }
    return a;
}

int findHCFOfArray(const vector<int>& arr) {
    int hcfValue = arr[0];
    
    for (int i = 1; i < arr.size(); ++i) {
        hcfValue = findHCF(hcfValue, arr[i]);  
    }
    
    return hcfValue;
}

int main() {
    vector<int> arr = {6, 12, 18, 24, 36, 40};
    
    vector<int> evenNumbers;
    
    for (int num : arr) {
        if (num % 2 == 0) {
            evenNumbers.push_back(num);
        }
    }

    int hcfValue = findHCFOfArray(evenNumbers);
    
    vector<int> hcfArray = {hcfValue};

    cout << "Even numbers in the array: ";
    for (int num : evenNumbers) {
        cout << num << " ";
    }
    cout << endl;

    cout << "HCF of the even numbers: " << hcfArray[0] << endl;

    return 0;
}
