// 7. Extract Decimal Part from String as Float
// Story: In a receipt, the price "34.56" is stored as a string. Extract the decimal part (.56) and convert it into a float.
// Goal: Convert the string "34.56" into the float 0.56.


#include<bits/stdc++.h>
using namespace std;

int main(){
  string priceStr = "34.56";
    size_t decimalPos = priceStr.find('.');
    string decimalPart = priceStr.substr(decimalPos);

    float decimalFloat = stof(decimalPart);
    cout << "Decimal Part as Float: " << decimalFloat << endl;

    return 0;
}
