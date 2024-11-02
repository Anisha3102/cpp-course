// 5. Float to String Conversion
// Story: A gas station records fuel prices as floats, such as 45.67. The system requires them in string format for logging purposes.
// Goal: Convert the float 45.67 to the string "45.67".


#include<bits/stdc++.h>
using namespace std;

int main(){
  float fuelPrice = 45.67;

    string fuelPriceStr = to_string(fuelPrice);

    cout << "Fuel Price as String: " << fuelPriceStr << endl;

    return 0;
}

