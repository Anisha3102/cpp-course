// 6. String to Float Conversion
// Story: A coffee shop has prices stored as strings, like "34.56". The manager needs them in float format to perform calculations.
// Goal: Convert the string "34.56" to the float 34.56.


#include<bits/stdc++.h>
using namespace std;

int main(){
  string priceStr = "34.56";

    float priceFloat = stof(priceStr);

    cout << "Price as Float: " << priceFloat << endl;

    return 0;
}
