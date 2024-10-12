//10 Clear all elements from a vector of characters and check if it is empty.

#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<char>arr{'a','b','c'};
    arr.clear();
    for(auto it:arr){
        cout<<it<<" ";
    }
    
    return 0;
}
