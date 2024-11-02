// 4. Integer to Float Conversion
// Story: A bank needs to convert the amount "5000" (as an integer) to a float to calculate interest.
// Goal: Convert the integer 5000 to the float 5000.0.


#include<bits/stdc++.h>
using namespace std;

int main(){
  int amountInt = 5000;
    

    float amountFloat = static_cast<float>(amountInt);

    cout << "Converted Amount: " << amountFloat << endl;

    return 0;
}

