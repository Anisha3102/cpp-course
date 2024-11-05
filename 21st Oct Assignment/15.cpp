// 15. Extract and Reverse Substring
// Story: A ticket booking system stores ticket numbers like "ABC123XYZ". Extract the middle numeric part ("123") and reverse it.
// Goal: Extract and reverse a substring.

#include<bits/stdc++.h>
using namespace std;

   string extractAndReverse(const string& ticketNumber) {
   string numericPart;
    

    for (char c : ticketNumber) {
        if (isdigit(c)) {
            numericPart += c;
        }
    }
    
    reverse(numericPart.begin(), numericPart.end());
    
    return numericPart;
}

int main() {
    string ticketNumber = "ABC123XYZ";
    string result = extractAndReverse(ticketNumber);
    cout << "Reversed Numeric Part: " << result << endl;
    return 0;
}

