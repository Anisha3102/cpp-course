// 13. Find the First Occurrence of a Character in a String
// Story: A search engine needs to find the first occurrence of the character "@" in an email ID like "john.doe@example.com".
// Goal: Find and return the index of the first occurrence of the "@" character.

#include<bits/stdc++.h>
using namespace std;

int main(){
   string emailID = "john.doe@example.com";

    size_t atIndex = emailID.find('@');

    if (atIndex != string::npos) {
        cout << "The first occurrence of '@' is at index: " << atIndex << endl;
    } else {
        cout << "'@' not found in the email ID." << endl;
    }
    return 0;
}
