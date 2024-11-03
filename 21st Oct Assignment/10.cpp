
// 10. Convert Comma-Separated String to Integer List
// Story: A software receives a list of sales numbers as a comma-separated string: "1000,2000,3000". Convert it to a list of integers.
// Goal: Parse the string and convert each part to an integer.

#include<bits/stdc++.h>
using namespace std;

int main(){
    string salesNumbers = "1000,2000,3000";
    vector<int> salesList;
    string number;


    stringstream ss(salesNumbers);

    
    while (getline(ss, number, ',')) {
        salesList.push_back(stoi(number)); 
    }


    cout << "Sales List: ";
    for (int sale : salesList) {
        cout << sale << " ";
    }
    cout << endl;
    return 0;
}
