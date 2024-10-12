//9 Remove the last element from a vector of integers and print the vector.

#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>arr{1,2,3,4};
    arr.pop_back();
    for(auto it:arr){
        cout<<it<<" ";
    }
    
    return 0;
}

