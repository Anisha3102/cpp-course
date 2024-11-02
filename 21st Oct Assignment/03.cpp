// 3. Extract Numbers from a String
// Story: An app developer needs to extract the phone number from a string "Contact: 123-456-7890" and
//convert it into an integer without the dashes.
// Goal: Extract and convert the phone number from the string to an integer.


#include<bits/stdc++.h>
using namespace std;

int main(){
  
    string contactInfo = "Contact: 123-456-7890";
    
    string phoneNumber = contactInfo.substr(contactInfo.find(":") + 2);
    

    phoneNumber.erase(remove(phoneNumber.begin(), phoneNumber.end(), '-'), phoneNumber.end());
    

    long long phoneInt = stoll(phoneNumber); 

    
    cout << "Extracted Phone Number: " << phoneInt << endl;

    return 0;
}

