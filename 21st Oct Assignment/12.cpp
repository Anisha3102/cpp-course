// 12 Convert Product ID from String to Integer
// Story: A warehouse stores product IDs as strings, such as "PROD12345". Extract the numeric part and convert it to an integer.
// Goal: Extract and convert the number from the string.

#include<bits/stdc++.h>
using namespace std;

int main(){
   string productID = "PROD12345";
   string numericPart;

    for (char c : productID) {
        if (isdigit(c)) {
            numericPart += c; 
        }
    }

    
    int productNumber = stoi(numericPart);


    cout << "Product Number: " << productNumber << endl;
    return 0;
}
