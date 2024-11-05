// 14. Convert Integer List to Comma-Separated String
// Story: A shipping company needs to store a list of package weights [10, 20, 30] as a comma-separated string for their records.
// Goal: Convert a list of integers to a single comma-separated string.

#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> weights = {10, 20, 30};
    string result;

    
    for (size_t i = 0; i < weights.size(); ++i) {
        result += to_string(weights[i]); 
        if (i < weights.size() - 1) {
            result += ","; 
        }
    }


    cout << "Comma-Separated String: " << result << endl;
    return 0;
}

