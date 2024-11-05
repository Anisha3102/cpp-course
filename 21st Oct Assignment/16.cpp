// 16. Convert String of Decimal Number to Float
// Story: An e-commerce website stores product ratings as strings like "4.85". Convert it to a float for further calculations.
// Goal: Convert the string "4.85" to a float.

#include<bits/stdc++.h>
using namespace std;

   float convertStringToFloat(const string& rating) {
    return stof(rating);
}

int main() {
    string ratingStr = "4.85";
    float ratingFloat = convertStringToFloat(ratingStr);
    
    cout << "Converted Rating: " << ratingFloat << endl; 
    
    return 0;
}
