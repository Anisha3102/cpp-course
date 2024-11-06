// 18. Round a Float to 2 Decimal Places and Convert to String
// Story: A payment system calculates interest rates and needs to round 2.4567 to 2 decimal places and convert it back to a string.
// Goal: Round a float and convert it to a string with 2 decimal places.

#include<bits/stdc++.h>
using namespace std;

string roundFloatToString(float value) {
    ostringstream oss;
    
    oss << fixed << setprecision(2) << value;
    return oss.str(); 
}

int main() {
    float number = 2.4567;
    string roundedString = roundFloatToString(number);
    
    cout << "Rounded String: " << roundedString << endl; 
    
    return 0;
}


