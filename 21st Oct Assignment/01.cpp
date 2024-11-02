// 1. Substring Extraction
// Story: A delivery agent wants to extract the postal code (last 6 digits) from a shipment tracking number,
//which is a string like "ORD12345098765". Write code to extract only the postal code.
// Goal: Extract a substring using the last 6 characters of the string.

#include<bits/stdc++.h>
using namespace std;

int main(){

    string trackingNumber = "ORD12345098765";
    

    string postalCode = trackingNumber.substr(trackingNumber.length() - 6);

    cout << "Postal Code: " << postalCode << endl;

    return 0;


}
