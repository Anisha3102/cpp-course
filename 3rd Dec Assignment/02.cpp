
//02 Create a program where you have a vector of integers. Use a map to store the frequency of each integer. Print the integers with their //frequencies in descending order of their occurrence.

#include <bits/stdc++.h>
using namespace std;
bool compareByFrequency(const pair<int, int>& a, const pair<int, int>& b) {
    return a.second > b.second; }

int main() {
    
    vector<int> vec = {4, 2, 4, 6, 2, 2, 6, 7, 4, 4, 3};
    map<int, int> freqMap;

    for (int num : vec) {
        freqMap[num]++;
    }

    vector<pair<int, int>> freqVector(freqMap.begin(), freqMap.end());

    sort(freqVector.begin(), freqVector.end(), compareByFrequency);


    for (const auto& entry : freqVector) {
        cout << entry.first << " - " << entry.second << endl;
    }

    return 0;
}

