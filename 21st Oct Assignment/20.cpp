// 20. Remove Decimal Part from Float and Convert to String
// Story: A bakery receives orders in float format like 23.50 and needs to convert it to the string "23", removing the decimal part.
// Goal: Convert a float to a string and remove the decimal part.

#include<bits/stdc++.h>
using namespace std;

string removeDecimalAndConvert(float value) {
    
    int intValue = static_cast<int>(value);

    return to_string(intValue);
}

int main() {
    float orderValue = 23.50;
    string orderString = removeDecimalAndConvert(orderValue);
    
    cout << "Order String: " << orderString << endl;
    
    return 0;
}
