//8 Add an element to the end of a vector of strings and print the updated vector.

#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<string>arr{"anisha","som","jeena"};
    arr.insert(arr.end(),"shanaya");
    for(auto it:arr){
        cout<<it<<" ";
    }
    
    return 0;
}

