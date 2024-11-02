// 2. String to Integer Conversion
// Story: The total order amount for a customer is stored as "5000" in string format. Convert it to an integer to perform further
// calculations.
// Goal: Convert the string "5000" to the integer 5000.

#include<bits/stdc++.h>
using namespace std;

int main(){

  string amountStr = "5000";
    
    int amount = stoi(amountStr);

    cout << "Total Order Amount: " << amount << endl;

    return 0;

}

