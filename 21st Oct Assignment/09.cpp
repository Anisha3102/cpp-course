// 9. Concatenate Substrings
// Story: A customer service system needs to concatenate the first 3 letters of the first name and the last 4 
//digits of a phone number to generate a unique code.
// Goal: Extract and concatenate substrings from two strings.


#include<bits/stdc++.h>
using namespace std;

int main(){
    string firstName = "Jonathan";
    string phoneNumber = "1234567890";

    string firstPart = firstName.substr(0, 3);


    string secondPart = phoneNumber.substr(phoneNumber.length() - 4);


    string uniqueCode = firstPart + secondPart;


    cout << "Unique Code: " << uniqueCode << endl;

    return 0;
}
