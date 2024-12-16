
//06 Given an array of strings representing words, write a program to count the frequency of
//each word using a map and then print the word with the highest frequency.



#include<bits/stdc++.h>
using namespace std;

int main(){
    
    vector<string> words = {"apple", "banana", "apple", "orange", "banana", "apple"};

    map<string, int> wordCount;

    for (auto word : words) {
        wordCount[word]++;
    }

    string mostFrequentWord;
    int maxFrequency = 0;

    for (auto entry : wordCount) {
        if (entry.second > maxFrequency) {
            mostFrequentWord = entry.first;
            maxFrequency = entry.second;
        }
    }

    cout << "The word with the highest frequency is: " << mostFrequentWord << endl;
    
    return 0;
}

